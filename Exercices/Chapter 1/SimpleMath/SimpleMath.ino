void setup() {
  Serial.begin(9600);

  int a = 89;
  int b = 42;
  int c = a - b;
  int d = 32;
  int e = 3;
  int f = d%e;



  Serial.print("a - b = ");
  Serial.println(c);
  Serial.print("d % e = ");
  Serial.println(f);
}

void loop() {
 
}
