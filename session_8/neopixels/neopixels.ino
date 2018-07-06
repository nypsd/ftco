// 12 Neopixel Ring
// Modified from NeoPixel Ring simple sketch (c) 2013 Shae Erisson

#include <Adafruit_NeoPixel.h>
#include <avr/power.h>



int neoPixelPin = 6; // pin that NeoPixels are connected to
int numNeoPixels = 16; // number of NeoPixels

// to setup the NeoPixel library, tell it how many pixels, and which pin to use to send signals
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(numNeoPixels, neoPixelPin, NEO_GRB + NEO_KHZ800);


void setup() {

  // start the NeoPixel library
  pixels.begin(); 
  
}

void loop() {

  // for a set of NeoPixels the first NeoPixel is 0, second is 1, 
  // all the way up to the total number of pixels minus one

  for(int i=0;i<numNeoPixels;i++){

    // to set the color of a NeoPixel use RGB values
    // from 0, 0, 0 up to 255, 255, 255
    pixels.setPixelColor(i, pixels.Color(200, 0, 190)); // purple color

    // send the command to the NeoPixels
    pixels.show();

    // pause
    delay(500); 

  }
}
