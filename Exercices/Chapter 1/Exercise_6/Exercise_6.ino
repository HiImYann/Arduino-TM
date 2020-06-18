void setup() {
  Serial.begin(9600);

  for( char myChar = 65; myChar <= 90; ++myChar ){
    Serial.println(myChar);
    delay(100);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
