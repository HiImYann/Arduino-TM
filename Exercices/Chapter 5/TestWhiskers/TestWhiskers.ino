void setup() {
  pinMode(5, INPUT);
  pinMode(7, INPUT);

Serial.begin(9600);
}

void loop() {
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);

  Serial.print(wLeft);
  Serial.println(wRight);

  delay(100);

}
