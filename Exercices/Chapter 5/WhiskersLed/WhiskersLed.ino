

void setup() {
  pinMode(5, INPUT);
  pinMode(7, INPUT);

  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);

  Serial.begin(9600);

 




}

void loop() {
  
 byte wLeft = digitalRead(5);
 byte wRight = digitalRead(7);

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


  Serial.print(wLeft);
  Serial.println(wRight);

  delay(100);

}
