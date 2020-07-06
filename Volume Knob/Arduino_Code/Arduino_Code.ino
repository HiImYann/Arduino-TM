#include <HID-Project.h> // Hinzufügen von Bibliotheken
#include <HID-Settings.h>
#include <TimerOne.h>
#include <ClickEncoder.h>

#define ENCODER_CLK A0 // Setzen von Dreh-Encoder-Pins
#define ENCODER_DT A1
#define ENCODER_SW A2

ClickEncoder *encoder;
int16_t last, value;

void timerIsr() {
  encoder->service();


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
