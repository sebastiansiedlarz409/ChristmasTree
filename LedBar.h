#include <Adafruit_NeoPixel.h>

#ifndef LEDBAR_H
#define LEDBAR_H

class LedBar{
  public:
    int PIN;
    int LedCount;
    Adafruit_NeoPixel* pixels;
    LedBar(int pin, int ledCount);
    void Init();
    void Clear();
    void StepOne();
    void StepTwo();
    void StepThree();
    void StepFour();
};

#endif //LEDBAR_H
