  //Aussagen 
    const int SerialBaud = 9600;
  //Geschwindigkeit der Informationsübertragung zwischen dem Arduino und dem seriellen Monitor
    int a = 52;
  //Erstellt einen Variable a vom Typ int und gibt ihm den Wert 63.
    int b = 10;
  //Erstellt einen Variable b vom Typ int und gibt ihm den Wert 10.
    float c = sqrt(2.0);
  // Erstellt einen Variable c vom Typ float und gibt ihm den Wert der Quadratwurzel von 2.
    char d = 'x';
  //Erstellt eine Variable a vom Typ char und gibt ihr den Wert "m".
    int Addition, Subtraktion, Multiplikation, Modulo;
    float Teilung;
  //Geben Sie den Namen der nächsten Berechnungen an.
    

  //Inisialisierung
void setup() {
  //Programmfunktion, die zu Beginn einmal ausgeführt wird.
    Serial.begin(SerialBaud);
  //Legt die Geschwindigkeit der seriellen Schnittstelle fest
    Serial.println("Hello world! \n");
  //Anzeige von "Hello World!" auf dem seriellen Monitor.
    Serial.println(a);
    Serial.println(b);
    Serial.println(c);
    Serial.println(d);
  //Zeigt die den Variablen zuvor zugewiesenen Werte an.
    Serial.println(d, DEC);
  //Zeigt den dezimalen Wert von "x" entsprechend dem ASCII-Code an.
   Serial.println();      //Zeigt einen Zeilenumbruch an
    Addition = a + b;
    Subtraktion = a - b;
    Multiplikation = a * b;
    Modulo = a % b;
    Teilung = a / b;
  //Definieren Sie den Wert jeder Berechnung
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    if ( a < b ) {
      Serial.println("b ist grosser als a");
    }
    else if ( a > b ) {
      Serial.println("a ist grosser als b");
    }
    else {
      Serial.println("a und b gleich sind");
    }
  //Wertet aus, ob die Bedingung wahr ist, und führt den entsprechenden Code aus. (Hier ist a größer als b)
    Serial.print("Addition a + b = ");
    Serial.println(Addition);
    Serial.print("Subtraktion a - b = ");
    Serial.println(Subtraktion);
    Serial.print("Multiplikation a * b = ");
    Serial.println(Multiplikation);
    Serial.print("Modulo a % b = ");
    Serial.println(Modulo);
    Serial.print("Teilung a / b = ");
    Serial.println(Teilung);
    Serial.println();
    Serial.println("Zahlen von 1 bis 5 :");
  //Zeigt mit der Funktion "for" Zahlen von 1 bis 5 an.
    for ( int i = 1; i <= 5; i = i + 1) {
      Serial.println(i);
    }
}

void loop() {
  
}
