#include "Adafruit_MotorShield.h"

/*=================================================================
 Set your forward, reverse, turning, and spinning speeds (max=255)
 =================================================================*/
#define ForwardSpeed 255
#define ReverseSpeed 255
#define TurningSpeed 100
#define SpinningSpeed 125

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield();

// And connect 2 DC motors to port M3 & M4 !
Adafruit_DCMotor *L_MOTOR = AFMS.getMotor(3);
Adafruit_DCMotor *R_MOTOR = AFMS.getMotor(4);

bool isRunning = false;     // true if motors are running

/*!
    @brief  Sets up Adafruit MotorShield and initializes the connected motors
*/
void MotorSetup()
{
    AFMS.begin();   // create with defaul frequency 1.6KHz

    L_MOTOR->setSpeed(0);
    L_MOTOR->run(RELEASE);

    L_MOTOR->setSpeed(0);
    L_MOTOR->run(RELEASE);
}

/*!
    @brief  Sets motors to run in certain direction
*/
void runMotors(uint8_t lfMotorDir, uint8_t rtMotorDir) {
    L_MOTOR->run(lfMotorDir);
    R_MOTOR->run(rtMotorDir);
}

/*!
    @brief  Based on Button Press, sets motors to run in correct direction and defines maximum speed to run motors
*/
uint8_t MotorSetDirection(uint8_t buttnum) 
{
    uint8_t maxSpeed = 0;

    switch (buttnum) {
        case 5: // forward (up arrow)
            runMotors(FORWARD, FORWARD);
            maxSpeed = ForwardSpeed;
            break;

        case 6: // reverse (down arrow)
            runMotors(BACKWARD, BACKWARD);
            maxSpeed = ReverseSpeed;
            break;

        case 7: // turn left
            runMotors(BACKWARD, FORWARD);
            maxSpeed = SpinningSpeed;
            break;

        case 8: // turn right
            runMotors(FORWARD, BACKWARD);
            maxSpeed = SpinningSpeed;
            break;

        default: 
            break;
    }
    return maxSpeed;
}

/*!
    @brief  revs up motors from 0 to maxSpeed - allows robot to start moving in a fluid motion
*/
void MotorStart(uint8_t maxSpeed) {

    if (!isRunning) 
    {
        isRunning = true;

        // speed up the motors
        for (int speed = 0; speed < maxSpeed; speed += 5)
        {
            L_MOTOR->setSpeed(speed);
            R_MOTOR->setSpeed(speed);
            delay(5); // 250ms total to speed up
        }
    }
}

/*!
    @brief  slows down motors from maxSpeed to 0 - allows robot to stop moving in a fluid motion
*/
void MotorStop(uint8_t maxSpeed) {

    if (isRunning) 
    {
        // slow down motors
        for (int speed = maxSpeed; speed >= 0; speed -= 5)
        {
            L_MOTOR->setSpeed(speed);
            R_MOTOR->setSpeed(speed);
            delay(5); // 50ms total to slow down
        }
        L_MOTOR->run(RELEASE);
        R_MOTOR->run(RELEASE);

        isRunning = false;
    }
}
