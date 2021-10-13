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
  pixels.setPixelColor(1, 0xFF8000);
  pixels.setPixelColor(2, 0xFFFF00);
  pixels.setPixelColor(3, 0x80FF00);
  pixels.setPixelColor(4, 0x00FF00);
  pixels.setPixelColor(5, 0x00FF80);
  pixels.setPixelColor(6, 0x00FFFF);
  pixels.setPixelColor(7, 0x0080FF);
  pixels.setPixelColor(8, 0x0000FF);
  pixels.setPixelColor(9, 0x8000FF);
  pixels.setPixelColor(10, 0xFF00FF);
  pixels.setPixelColor(11, 0xFF0080);
  pixels.setPixelColor(12, 0xFF0000);
  pixels.show();
}
