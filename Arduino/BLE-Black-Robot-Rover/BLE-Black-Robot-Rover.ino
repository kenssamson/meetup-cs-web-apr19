//#define DEBUG 1   // used to control how much information is sent to serial monitor

/*********************************************************************
 This is an example for our nRF51822 based Bluefruit LE modules
  
 Modified to drive a 3-wheeled BLE Robot Rover! by http://james.devi.to

 Pick one up today in the Adafruit shop!

 Adafruit invests time and resources providing this open source code,
 please support Adafruit and open-source hardware by purchasing
 products from Adafruit!

 MIT license, check LICENSE for more information
 All text above, and the splash screen below must be included in
 any redistribution
*********************************************************************/

#include <string.h>
#include <Arduino.h>
#include <SPI.h>
#if not defined(_VARIANT_ARDUINO_DUE_X_)
#include <SoftwareSerial.h>
#endif
#include <Wire.h>

#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "Adafruit_BluefruitLE_UART.h"
#include "Adafruit_MotorShield.h"

#include "BluefruitConfig.h"
#include "packetParser.h"

/*===========================================
 Name your RC here
 ===========================================*/
String BROADCAST_NAME = "Adafruit Black Robot Rover";

/*===========================================
  board controller objects
  ===========================================*/

// Create the controller board object with default settings
Adafruit_BluefruitLE_SPI ble = Adafruit_BluefruitLE_SPI(BLUEFRUIT_SPI_CS, BLUEFRUIT_SPI_IRQ, BLUEFRUIT_SPI_RST);

const char HEADLIGHTS_LABEL[] = "head lights";
const char TAILLIGHTS_LABEL[] = "tail lights";

/*==============================================================
 packetparser.cpp function prototypes and global variables 
 ==============================================================*/

// function prototypes over in packetparser.cpp
//uint8_t readPacket(Adafruit_BLE *ble, uint16_t timeout);
//float parsefloat(uint8_t *buffer);
//void printHex(const uint8_t *data, const uint32_t numBytes);

// the packet buffer (defined in packetparser.cpp)
//extern uint8_t packetbuffer[];

char buf[60];

/*===========================================
 PINS used for add-ons
 ===========================================*/
#define HEADLIGHTS 12
#define TAILLIGHTS 5

/*===========================================
 settings to track activity and state
 ===========================================*/
bool autoLights = true; // turn on/off auto-lights feature
bool headLightsOn = false; // true when head lights are on
bool tailLightsOn = false; // true when tail lights are on

bool isMoving = false;  // true when rover is moving
uint8_t maxSpeed = 0;

// A small helper
void error(const __FlashStringHelper *err)
{
    Serial.println(err);
    while (1);
}

/**************************************************************************/
/*!
    @brief  Sets up the HW and the BLE module (this function is called
            automatically on startup)
*/
/**************************************************************************/
void setup(void)
{
    Serial.begin(9600);

    MotorSetup();
    PlayMusicSetup();
    AnalogSetup();
    LightsSetup();

    /* Initialize the module */
    Serial.begin(115200);
    Serial.println(F("Adafruit Bluefruit Robot Controller Example"));
    Serial.println(F("-----------------------------------------"));

    BLEsetup();
}

/**************************************************************************/
/*!
    @brief  Main Loop for Program (this function is called automatically)
*/
/**************************************************************************/
void loop(void)
{
    AnalogLoop();

    // read new packet data
    uint8_t len = readPacket(&ble, BLE_READPACKET_TIMEOUT);
    readController();
}

/**************************************************************************/
/* setup helper functions                                                 */
/**************************************************************************/

/*!
    @brief  Setup for the Bluefruit LE Board
*/
void BLEsetup() {

    Serial.print(F("Initialising the Bluefruit LE module: "));

    if (!ble.begin(VERBOSE_MODE))
    {
        error(F("Couldn't find Bluefruit, make sure it's in CoMmanD mode & check wiring?"));
    }
    Serial.println(F("OK!"));

    /* Perform a factory reset to make sure everything is in a known state */
    Serial.println(F("Performing a factory reset: "));
    if (!ble.factoryReset())
    {
        error(F("Couldn't factory reset"));
    }

    //Convert the name change command to a char array
    String BROADCAST_CMD = String("AT+GAPDEVNAME=" + BROADCAST_NAME);
    BROADCAST_CMD.toCharArray(buf, 60);

    //Change the broadcast device name here!
    if (ble.sendCommandCheckOK(buf))
    {
        Serial.println("name changed");
    }
    delay(250);

    //reset to take effect
    if (ble.sendCommandCheckOK("ATZ"))
    {
        Serial.println("resetting");
    }
    delay(250);

    //Confirm name change
    ble.sendCommandCheckOK("AT+GAPDEVNAME");

    /* Disable command echo from Bluefruit */
    ble.echo(false);

    Serial.println("Requesting Bluefruit info:");
    /* Print Bluefruit information */
    ble.info();

    Serial.println(F("Please use Adafruit Bluefruit LE app to connect in Controller mode"));
    Serial.println(F("Then activate/use the sensors, color picker, game controller, etc!"));
    Serial.println();

    ble.verbose(false); // debug info is a little annoying after this point!

    /* Wait for connection */
    while (!ble.isConnected())
    {
        delay(500);
    }

    Serial.println(F("*****************"));

    // Set Bluefruit to DATA mode
    Serial.println(F("Switching to DATA mode!"));
    ble.setMode(BLUEFRUIT_MODE_DATA);

    Serial.println(F("*****************"));
}

/*!
    @brief  Sets up the pins used to control the lights
*/
void LightsSetup() {

    pinMode(HEADLIGHTS, OUTPUT);
    pinMode(TAILLIGHTS, OUTPUT);

    digitalWrite(HEADLIGHTS, LOW);
    digitalWrite(TAILLIGHTS, LOW);
}

/**************************************************************************/
/* loop helper functions                                                 */
/**************************************************************************/

/*!
    @brief  Turns On or Off the selected lights 
*/
bool toggleLights(uint8_t pin, bool lightsOn, const char label[]) {
    ble.print("Turn "); ble.print(lightsOn ? "off" : "on"); ble.print(" the "); ble.println(label);
    digitalWrite(pin, lightsOn ? LOW : HIGH);

    return !lightsOn;
}

/*!
    @brief  Enables/Disables automatic lights
*/
void toggleAutoLights() {
    ble.print("Turn "); ble.print(autoLights ? "off" : "on"); ble.println(" automatic lights");
    autoLights = !autoLights;
}

/*!
    @brief  handles button input from the controller app
*/
bool readController() {

    // Buttons
    if (packetbuffer[1] == 'B')
    {
        uint8_t buttnum = packetbuffer[2] - '0';
        boolean pressed = packetbuffer[3] - '0';

        // if button is pressed
        if (pressed)
        {
            switch (buttnum)
            {
            case 1:
                PlayMusicLoop();
                break;

            case 2:
                headLightsOn = toggleLights(HEADLIGHTS, headLightsOn, HEADLIGHTS_LABEL);
                break;

            case 3:
                tailLightsOn = toggleLights(TAILLIGHTS, tailLightsOn, TAILLIGHTS_LABEL);
                break;

            case 4:
                toggleAutoLights();
                break;

            default:
                maxSpeed = MotorSetDirection(buttnum);
                if (maxSpeed > 0)
                {
                    MotorStart(maxSpeed);
                    isMoving = true;
                }
                break;
            }
        }
        // if button is released
        else
        {
            Serial.print("current speed: "); Serial.println(maxSpeed);
            if (isMoving || maxSpeed > 0)
            {
                MotorStop(maxSpeed);
                maxSpeed = 0;
                isMoving = false;
            }
        }
    }
}

