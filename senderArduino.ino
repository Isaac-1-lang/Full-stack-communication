#include <SoftwareSerial.h>


SoftwareSerial bluetooth(10,11); // RX,TX

const int butttonPin=9;



void setup() {
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
  bluetooth.begin(9600);
}


void loop() {
  int buttonState = digitalRead(buttonPin);

  if(buttonState==LOW) {
    Serial.println("Button pressed");
    bluetooth.write('1');
    delay(500);
  }
}