void setup() {
  Serial.begin(9600);
  
  int a = 37;
  int two = 2;
  int modulo = a % two;

  Serial.println (modulo);

  if (modulo == 0) {
    Serial.println ("The variable is even");
  }
  else {
    Serial.println ("The variable is odd");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
