#include "LedBar.h"

LedBar::LedBar(int pin, int ledCount){
  PIN = pin;
  LedCount = ledCount;
  pixels = new Adafruit_NeoPixel(LedCount, PIN, NEO_GRB + NEO_KHZ800);
}

void LedBar::Init(){
  pixels->begin();
  pixels->setBrightness(20);
}

void LedBar::Clear(){
  pixels->clear();
}

void LedBar::StepOne(){
  for(int i=0; i<LedCount; i++) {
    if(i % 6 == 0){
      pixels->setPixelColor(i, pixels->Color(255, 0, 0));
    }
    if(i % 6 == 1){
      pixels->setPixelColor(i, pixels->Color(0, 255, 0));
    }
    if(i % 6 == 2){
      pixels->setPixelColor(i, pixels->Color(0, 0, 255));
    }
    if(i % 6 == 3){
      pixels->setPixelColor(i, pixels->Color(0, 255, 255));
    }
    if(i % 6 == 4){
      pixels->setPixelColor(i, pixels->Color(255, 255, 0));
    }
    if(i % 6 == 5){
      pixels->setPixelColor(i, pixels->Color(255, 0, 255));
    }
    pixels->show();
    delay(40);
  }
  
  delay(500);

  for(int i=0; i<LedCount; i++) {
    pixels->setPixelColor(i, pixels->Color(0, 0, 0));
    pixels->show();
    delay(40);
  }
}

void LedBar::StepTwo(){
  for(int i=0; i<6; i++) { 
    int r = (int)random(0, 255);
    int g = (int)random(0, 255);
    int b = (int)random(0, 255);
    for(int i=0; i<LedCount; i++)
      pixels->setPixelColor(i, pixels->Color(r, g, b));
    pixels->show();
    delay(600);
  }
}

void LedBar::StepThree(){
  pixels->clear();

  for(int k = 0; k < 6; k++){
    for(int i=0; i<LedCount-1; i++) {

      if(k % 6 == 0){
        pixels->setPixelColor(i-1, pixels->Color(50, 0, 0));
        pixels->setPixelColor(i, pixels->Color(80, 0, 0));
        pixels->setPixelColor(i+1, pixels->Color(255, 0, 0));
      }
      if(k % 6 == 1){
        pixels->setPixelColor(i-1, pixels->Color(0, 50, 0));
        pixels->setPixelColor(i, pixels->Color(0, 80, 0));
        pixels->setPixelColor(i+1, pixels->Color(0, 255, 0));;
      }
      if(k % 6 == 2){
        pixels->setPixelColor(i-1, pixels->Color(0, 0, 50));
        pixels->setPixelColor(i, pixels->Color(0, 0, 80));
        pixels->setPixelColor(i+1, pixels->Color(0, 0, 255));
      }
      if(k % 6 == 3){
        pixels->setPixelColor(i-1, pixels->Color(50, 0, 50));
        pixels->setPixelColor(i, pixels->Color(80, 0, 80));
        pixels->setPixelColor(i+1, pixels->Color(255, 0, 255));
      }
      if(k % 6 == 4){
        pixels->setPixelColor(i-1, pixels->Color(60, 50, 0));
        pixels->setPixelColor(i, pixels->Color(80, 80, 0));
        pixels->setPixelColor(i+1, pixels->Color(255, 255, 0));
      }
      if(k % 6 == 5){
        pixels->setPixelColor(i-1, pixels->Color(0, 50, 50));
        pixels->setPixelColor(i, pixels->Color(0, 80, 80));
        pixels->setPixelColor(i+1, pixels->Color(0, 255, 255));
      }

      pixels->show();
      delay(100);
      pixels->clear();
    }

    pixels->clear();
  }

}

void LedBar::StepFour(){
  for(int k = 0; k<10; k++){
    int r = (int)random(0, 255);
    int g = (int)random(0, 255);
    int b = (int)random(0, 255);
    for(int i=LedCount/2,j = LedCount/2-1; i<LedCount; i++, j--) {
    
      pixels->setPixelColor(j, pixels->Color(r,g,b));
      pixels->setPixelColor(i, pixels->Color(r,g,b));
    
      pixels->show();
      delay(60);
      pixels->clear();
    }
    delay(100);
  }
}
