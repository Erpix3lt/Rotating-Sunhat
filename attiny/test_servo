#include <ServoManager.h>
PrecisionServo* servo;

// Pin assignments
const int servoPin = PB4;    // ATtiny85 PB0 pin


void setup() {
  ServoManager::setup(1);

  servo = ServoManager::createServo(servoPin);
  servo->setSetting(SERVO_MEDIUM_ENDPOINT);
  // Init servo position

}

void loop() {
  servo->setTarget(40);
  ServoManager::waitUntilFinished();
  delay(1000);
  servo->setTarget(0);
  ServoManager::waitUntilFinished();
  delay(1000);
}
