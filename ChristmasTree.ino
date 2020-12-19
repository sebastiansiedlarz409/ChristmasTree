#include <Adafruit_NeoPixel.h>

#define PIN        6
#define NUMPIXELS 30

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void stepOne(){
  for(int i=0; i<NUMPIXELS; i++) {
    if(i % 6 == 0){
      pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    }
    if(i % 6 == 1){
      pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    }
    if(i % 6 == 2){
      pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    }
    if(i % 6 == 3){
      pixels.setPixelColor(i, pixels.Color(0, 255, 255));
    }
    if(i % 6 == 4){
      pixels.setPixelColor(i, pixels.Color(255, 0, 255));
    }
    if(i % 6 == 5){
      pixels.setPixelColor(i, pixels.Color(255, 255, 0));
    }
    pixels.show();
    delay(200);
  }
  
  delay(1000);

  for(int i=NUMPIXELS-1; i>=0; i--) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    delay(200);
  }
}

void stepTwo(){
  for(int i=0; i<6; i++) {
    if(i % 6 == 0){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    }
    if(i % 6 == 1){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    }
    if(i % 6 == 2){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    }
    if(i % 6 == 3){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(0, 255, 255));
    }
    if(i % 6 == 4){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(255, 0, 255));
    }
    if(i % 6 == 5){
      for(int i=0; i<NUMPIXELS; i++)
        pixels.setPixelColor(i, pixels.Color(255, 255, 0));
    }
    pixels.show();
    delay(500);
  }
}

void stepThree(){
  //FORWARD
  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(10, 0, 0));
    pixels.setPixelColor(i, pixels.Color(100, 0, 0));
    pixels.setPixelColor(i+1, pixels.Color(255, 0, 0));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(0, 0, 10));
    pixels.setPixelColor(i, pixels.Color(0, 0, 100));
    pixels.setPixelColor(i+1, pixels.Color(0, 0, 255));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(0, 10, 0));
    pixels.setPixelColor(i, pixels.Color(0, 100, 0));
    pixels.setPixelColor(i+1, pixels.Color(0, 255, 0));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(0, 10, 10));
    pixels.setPixelColor(i, pixels.Color(0, 100, 100));
    pixels.setPixelColor(i+1, pixels.Color(0, 255, 255));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(10, 10, 0));
    pixels.setPixelColor(i, pixels.Color(100, 100, 0));
    pixels.setPixelColor(i+1, pixels.Color(255, 255, 0));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  for(int i=0; i<NUMPIXELS-1; i++) {
    
    pixels.setPixelColor(i-1, pixels.Color(10,0, 10));
    pixels.setPixelColor(i, pixels.Color(100,0, 100));
    pixels.setPixelColor(i+1, pixels.Color(255,0, 255));
    
    pixels.show();
    delay(60);
    pixels.clear();
  }

  pixels.clear();

  //FORWARD END

}

void loop() {
  pixels.clear();

  //stepOne();

  //stepTwo();

  stepThree();

}
