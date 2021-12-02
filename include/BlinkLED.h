#include <Arduino.h>


void BlinkLed(int Led){

    pinMode (Led, OUTPUT) ;

  digitalWrite(Led, HIGH);   // allume la LED
  delay(1000);                 // attend 500ms
  digitalWrite(Led, LOW);    // éteint la LED
  delay(1000);                 // attend 500ms
}

