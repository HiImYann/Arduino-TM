#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  Serial.begin(9600);

servoLeft.attach(13);
servoRight.attach(12);

servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);

delay(15000);

servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);

}

void loop() {
  

}
