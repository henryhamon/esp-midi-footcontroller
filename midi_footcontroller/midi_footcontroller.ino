#include <Adafruit_NeoPixel.h>

#define D_in 6
#define qtdeLeds 4

Adafruit_NeoPixel pixels(qtdeLeds, D_in);

// Pins
const int Foots[] = {};
bool LedStates[] = {false, false, false, false, false, false};

void setup() {
  pinMode(D_in, OUTPUT);      // 6 pin as output
  pixels.begin(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  pixels.clear();      
  for(int i=0; i<qtdeLeds; i++){        
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));     
    pixels.show();      
    delay(500);         
    
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));     
    pixels.show();      
    delay(500);         
    
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));     
    pixels.show();      
    delay(500);         
  }
}
