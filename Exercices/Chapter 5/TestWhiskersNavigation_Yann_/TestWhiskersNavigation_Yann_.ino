#include <Servo.h>

Servo servoLeft;
Servo servoRight;


void setup() {
  pinMode(5, INPUT);    //Moustaches
  pinMode(7, INPUT);

  pinMode(8, OUTPUT);   //LEDs
  pinMode(2, OUTPUT);

  servoLeft.attach(13);
  servoRight.attach(12);

  Serial.begin(9600);
  tone(4, 3000, 500);
}



void loop() {

 byte wLeft = digitalRead(5);
 byte wRight = digitalRead(7);


//LED SECTION

if(wLeft == 0)
{
  digitalWrite(2, HIGH);
}
else
{
  digitalWrite(2, LOW);
}


if(wRight == 0)
{
  digitalWrite(8, HIGH);
}
else
{
  digitalWrite(8, LOW);
}


//SERVO SECTION

  if ((wLeft == 0) && (wRight ==0))
  {
    backward(700);
    left(1000);
  }
  else if (wLeft == 0)
  {
    backward(700);
    left(500);
  }
  else if (wRight == 0)
  {
    backward(700);
    right(500);
  }
  else
  {
    forward(20);
  }



Serial.print(wLeft);
Serial.println(wRight);
 
  
}




void forward (int time)
{
  servoLeft.writeMicroseconds(1400);
  servoRight.writeMicroseconds(1600);
  delay(time);
}

void backward (int time)
{
  servoLeft.writeMicroseconds(1600);
  servoRight.writeMicroseconds(1400);
  delay(time);
}

void left (int time)
{
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1600);
  delay(time);
}

void right (int time)
{
  servoLeft.writeMicroseconds(1400);
  servoRight.writeMicroseconds(1500);
  delay(time);
}
