#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);

  servoLeft.writeMicroseconds(1550);
  servoRight.writeMicroseconds(1300);

}

void loop() {
  // put your main code here, to run repeatedly:

}
