#include <Arduino.h>
#include "freerts.h"


freerts LED1(LED_BUILTIN,300);
freerts LED2(13,30);



void setup() {
  Serial.begin(9600);
}

void loop() {
  LED1.ON();
  LED1.OFF();
  LED2.ON();
  LED2.OFF();
}