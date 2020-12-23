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
  //FORWARD
  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(10, 0, 0));
    pixels->setPixelColor(i, pixels->Color(100, 0, 0));
    pixels->setPixelColor(i+1, pixels->Color(255, 0, 0));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(0, 0, 10));
    pixels->setPixelColor(i, pixels->Color(0, 0, 100));
    pixels->setPixelColor(i+1, pixels->Color(0, 0, 255));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(0, 10, 0));
    pixels->setPixelColor(i, pixels->Color(0, 100, 0));
    pixels->setPixelColor(i+1, pixels->Color(0, 255, 0));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(255, 251, 0));
    pixels->setPixelColor(i, pixels->Color(255, 251, 0));
    pixels->setPixelColor(i+1, pixels->Color(255, 251, 0));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(0, 10, 10));
    pixels->setPixelColor(i, pixels->Color(0, 100, 100));
    pixels->setPixelColor(i+1, pixels->Color(0, 255, 255));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(10, 10, 0));
    pixels->setPixelColor(i, pixels->Color(100, 100, 0));
    pixels->setPixelColor(i+1, pixels->Color(255, 255, 0));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(10,0, 10));
    pixels->setPixelColor(i, pixels->Color(100,0, 100));
    pixels->setPixelColor(i+1, pixels->Color(255,0, 255));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  for(int i=0; i<LedCount-1; i++) {
    
    pixels->setPixelColor(i-1, pixels->Color(245, 5, 173));
    pixels->setPixelColor(i, pixels->Color(245, 5, 173));
    pixels->setPixelColor(i+1, pixels->Color(245, 5, 173));
    
    pixels->show();
    delay(60);
    pixels->clear();
  }

  pixels->clear();

  //FORWARD END

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
