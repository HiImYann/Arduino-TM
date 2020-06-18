void setup() {
Serial.begin(9600);

  
for ( int i = 21; i <= 39; i += 3){
  Serial.println(i);
  delay(500);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
