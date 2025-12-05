#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10,11); // RX,TX
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);     // For debugging
  bluetooth.begin(9600);  // Match with your module
}

void loop() {
  if(bluetooth.available()) {
    char command = bluetooth.read();
    Serial.print("Received: ");
    Serial.println(command);

    if(command == '1') {
      digitalWrite(ledPin, !digitalRead(ledPin));
    }
  }
}
