#include "LedBar.h"

LedBar leds(6, 30);

void setup() {
  leds.Init();
}

void loop() {
  leds.Clear();
  
  leds.StepOne();

  leds.StepTwo();

  leds.StepThree();

  leds.StepFour();
}
