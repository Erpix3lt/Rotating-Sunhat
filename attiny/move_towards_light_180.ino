#include <ServoManager.h>
PrecisionServo* servo;

// Pin assignments
const int servoPin = PB4;    // ATtiny85 PB0 pin
const int lightSensorPin = A1;  // ATtiny85 PB1 pin

// Servo motor control parameters
const int servoMin = 0;    // Minimum position (0°)
const int servoMax = 180;  // Maximum position (180°)
const int servoStep = 10;   // Incremental step size for servo movement

int previousLightValue = 0;  // Previous light sensor value
int previousServoValue = 0;

void setup() {
  ServoManager::setup(1);

  servo = ServoManager::createServo(servoPin);
  servo->setSetting(SERVO_MEDIUM_ENDPOINT);
  // Init servo position
  servo->setTarget(0);
  ServoManager::waitUntilFinished();
}

void loop() {
  // Read the analog value from the light sensor
  int currentLightValue = analogRead(lightSensorPin);

  if (currentLightValue > previousLightValue) {
    // Move in the same direction
    if (previousServoValue + servoStep <= servoMax) {
      servo->setTarget(previousServoValue + servoStep);
      ServoManager::waitUntilFinished();
      previousServoValue += servoStep;
    }
  } else if (currentLightValue < previousLightValue) {
    // Move in the opposite direction
    if (previousServoValue - servoStep >= servoMin) {
      servo->setTarget(previousServoValue - servoStep);
      ServoManager::waitUntilFinished();
      previousServoValue -= servoStep;
    }
  }

  // Update previous light sensor value
  previousLightValue = currentLightValue;

  delay(400);  // Adjust delay time as needed
}
