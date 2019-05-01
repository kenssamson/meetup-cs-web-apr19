/*===========================================
 PIN and base settings for calculating Temperature
 ===========================================*/
#ifndef THERMISTOR
    #define THERMISTOR A1
    #define SERIESRESISTOR 10000
    #define THERMISTORNOMINAL 10000  
    #define TEMPERATURENOMINAL 25
    #define BCOEFFICIENT 3950
    #define CELSIUS2KELVIN 273.15
#endif

/*===========================================
 Auto Headlight Limit - range 0-1000, higher 
 number means darker room
 ===========================================*/
#ifndef PHOTORESISTOR
    #define PHOTORESISTOR A3
    #define LOWLIGHTLIMIT 800
#endif

/*===========================================
 'multi-tasking' settings
 ===========================================*/
unsigned long DELAY_TIME = 1000;    // time between each occurance in milliseconds
unsigned long delayStart = 0;       // used to hold system time  
bool delayRunning = false;          // flag to indicate if code should run after delay
bool ledOn = false;                 // true when LED_BUILTIN is on (used to indicate delayed loop is running)

void AnalogSetup() {

    pinMode(THERMISTOR, INPUT);
    pinMode(PHOTORESISTOR, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);

    digitalWrite(LED_BUILTIN, LOW);
    
    delayStart = millis();
    delayRunning = true;
}

void AnalogLoop() {

  /* this basically let's you run some items on a delayed basis without using delay() 
     the code will run every DELAY_TIME milliseconds - good for reading analog inputs
  */
  if (delayRunning && ((millis() - delayStart) >= DELAY_TIME)) {
    delayStart += DELAY_TIME;

    // blink the builtin LED so we know things are running as expected
    ledOn = !ledOn;
    digitalWrite(LED_BUILTIN, ledOn ? HIGH : LOW);

    readPhotoResistor();
    readThermistor();

    ble.println();
#ifdef DEBUG
    Serial.println();
#endif
  }
}

/*=================================================
  read the value from photo resistor and 
  turn the headlights on/off based on conditions
 =================================================*/
void readPhotoResistor() 
{
  int photoCellReading = analogRead(PHOTORESISTOR);

#ifdef DEBUG
  Serial.print(F("[PHOTO: ")); Serial.print(photoCellReading); Serial.print(F(" ]"));
#endif

  if (autoLights) {
    bool lightsOn = headLightsOn || tailLightsOn;

    if ((photoCellReading >= LOWLIGHTLIMIT) && !lightsOn) {
      headLightsOn = tailLightsOn = true;

      digitalWrite(HEADLIGHTS, HIGH);
      digitalWrite(TAILLIGHTS, HIGH);
    }
    else if ((photoCellReading < LOWLIGHTLIMIT) && lightsOn) {
      headLightsOn = tailLightsOn = false;

      digitalWrite(HEADLIGHTS, LOW);
      digitalWrite(TAILLIGHTS, LOW);
    }
  }

  ble.print("Lumin: "); ble.print(((float)1000 - photoCellReading) / (float)10); ble.print(", ");
}

/*=================================================
  read the value from THERMISTOR and 
  calculate the temperature in degrees Fahrenheit
 =================================================*/
void readThermistor() 
{
  int sampleCount = 5;
  float resistance, kelvin, celsius, fahrenheit, sample = 0.0;

  // take a few samples to reduce erractic values
  for (int i = 0; i < sampleCount; i++) {
    sample += analogRead(THERMISTOR);
    delay(10);
  }
  sample /= sampleCount;

  // calculate resistance
  resistance = SERIESRESISTOR / ((1023 / sample) - 1);

  /* use Steinhart-Hart Equation to get approximate temperature

      R = resistance
      Ro = THERMISTORNOMINAL
      B = BCOEFFICIENT
      To = THERMISTORNOMINAL + CELSIUS2KELVIN

      K = 1 / ( log(R/Ro) / B + 1 / To )
      C = K - CELSIUS2KELVIN
  */
  kelvin = 1.0 / ((log(resistance / THERMISTORNOMINAL) / BCOEFFICIENT) + (1.0 / (TEMPERATURENOMINAL + CELSIUS2KELVIN)));
  celsius = kelvin - CELSIUS2KELVIN;
  fahrenheit = (celsius * 9 / 5) + 32.0;

#ifdef DEBUG
  Serial.print(F("[TEMP: ")); Serial.print(fahrenheit); Serial.write(0xC2); Serial.write(0xB0); Serial.print(F("F ]"));
#endif

  ble.print("Temp: "); ble.print(fahrenheit); ble.print(", ");
}
