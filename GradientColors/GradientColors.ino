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
  pixels.setPixelColor(1, 0xE60000);
  pixels.setPixelColor(2, 0xCC0000);
  pixels.setPixelColor(3, 0xB30000);
  pixels.setPixelColor(4, 0x990000);
  pixels.setPixelColor(5, 0x800000);
  pixels.setPixelColor(6, 0x660000);
  pixels.setPixelColor(7, 0x4D0000);
  pixels.setPixelColor(8, 0x330000);
  pixels.setPixelColor(9, 0x1A0000);
  pixels.setPixelColor(10, 0x000000);
  pixels.setPixelColor(11, 0x000000);
  pixels.setPixelColor(12, 0x000000);
  pixels.show();
}
