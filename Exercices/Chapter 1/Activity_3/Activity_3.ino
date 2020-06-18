  int a = 42;
  char b = 'm';
  float root2 = sqrt(2.0);
  char c = 'n';

void setup() {
  Serial.begin(9600);

  
}

void loop() {
  Serial.println(a);
  Serial.println(b);
  Serial.println(root2);
  Serial.println(c, DEC);

}
