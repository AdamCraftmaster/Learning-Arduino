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
  while (true) {
    for (int i = 0; i <= 12; i++) {
      pixels.setPixelColor(i, 0x000000);
      pixels.setPixelColor(i+1, 0xFF8000);
      pixels.setPixelColor(i+2, 0xFFFF00);
      pixels.setPixelColor(i+3, 0x80FF00);
      pixels.setPixelColor(i+4, 0x00FF00);
      pixels.setPixelColor(i+5, 0x00FF80);
      pixels.setPixelColor(i+6, 0x00FFFF);
      pixels.setPixelColor(i+7, 0x0080FF);
      pixels.setPixelColor(i+8, 0x0000FF);
      pixels.setPixelColor(i+9, 0x8000FF);
      pixels.setPixelColor(i+10, 0xFF00FF);
      pixels.setPixelColor(i+11, 0xFF0080);
      pixels.setPixelColor(i+12, 0xFF0000);
      pixels.show();
      delay(100);
    }
    delay(1000);
  }
}
