#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {

  Serial.begin(9600);
  Serial.println("Beep!");

  tone(4, 3000, 1000);
  delay(1000);
  
  servoLeft.attach(13);
  servoRight.attach(12);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);

}

void loop() {
  // put your main code here, to run repeatedly:

}
