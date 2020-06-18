void setup() {
Serial.begin(9600);

  
for (char val = 32; val <=126; ++val){
  Serial.print("In ASCII the number ");
  Serial.print(val, DEC);
  Serial.print(" is equal to ");
  Serial.println(val);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
