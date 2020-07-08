#include <HID-Project.h> // Hinzufügen von Bibliotheken
#include <HID-Settings.h>
#include <TimerOne.h>
#include <ClickEncoder.h>

#define ENCODER_CLK A0 // Setzen von Dreh-Encoder-Pins
#define ENCODER_DT A1
#define ENCODER_SW A2

ClickEncoder *encoder;
int16_t last, value; // Deklaration der Variablen "last" und "value"

void timerIsr() {
  encoder->service(); }


void setup() {
  Serial.begin(9600);
  Consumer.begin(); // Initialisierung der Tastatur
  encoder = new ClickEncoder(ENCODER_DT, ENCODER_CLK, ENCODER_SW); // Initialisierung von Encoder-Pins

  Timer1.initialize(2000); // Initialisierung der Frequenz, bei der der Encoder eine Drehung erkennt
  Timer1.attachInterrupt(timerIsr);
  last = -1;

}

void loop() {
  value += encoder->getValue();

  // Drehung des Encoders
  if (value != last) {  // Wenn der neue Wert vom alten Wert abweicht, wurde der Encoder gedreht 
    if (last<value) // Erkennt die Drehrichtung
    Consumer.write(MEDIA_VOLUME_UP);  // Mehr Lautstärke
    else
    Consumer.write(MEDIA_VOLUME_DOWN);  // Weniger Lautstärke
    last = value; // Werte auffrischen

    Serial.print(value); // Zeigt den Encoder-Wert auf dem seriellen Monitor an
  }

  // Encoder-Taste
  ClickEncoder::Button b = encoder->getButton(); // Schauen Sie sich den aktuellen Wert der Taste an
  if (b != ClickEncoder::Open) { // Wenn die Taste nicht gedrückt ist, unternehmen Sie nichts
    switch (b) {
      case ClickEncoder::Clicked: //  Wenn die Taste einmal gedrückt wird ...
        Consumer.write(MEDIA_PLAY_PAUSE); // Halten Sie die Medien an
       break;

       case ClickEncoder::DoubleClicked: // Wenn die Taste zweimal gedrückt wird ...
        Consumer.write(MEDIA_NEXT); // Springen Sie zu den nächsten Medien 
        break;
    }
   }

   delay(30); // Warten Sie 30 Millisekunden
  }
