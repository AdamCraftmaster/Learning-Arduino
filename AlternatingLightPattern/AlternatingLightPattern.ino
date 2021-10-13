#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

int const NUM_PIXELS = 12;
int8_t const PIN = 13;
Adafruit_NeoPixel pixels;

void setup() {
  pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB+NEO_KHZ800);
  pixels.begin();
  pixels.show(); // Init all pixels to "off"
}
void loop() {
  // Colors are defined in 0xRRGGBB format.
  pixels.setPixelColor(0, 0xFF0000);
  pixels.setPixelColor(2, 0xFF0000);
  pixels.setPixelColor(4, 0xFF0000);
  pixels.setPixelColor(6, 0xFF0000);
  pixels.setPixelColor(8, 0xFF0000);
  pixels.setPixelColor(10, 0xFF0000);
  pixels.setPixelColor(12, 0xFF0000);
  pixels.show();
}
