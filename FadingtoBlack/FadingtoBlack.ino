#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

int const NUM_PIXELS = 12;
int8_t const PIN = 11;
Adafruit_NeoPixel pixels;

void setup() {
  Serial.begin(9600);
  pixels = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB+NEO_KHZ800);
  pixels.begin();
  pixels.show(); // Init all pixels to "off"
}
void loop() {
    // Colors are defined in 0xRRGGBB format.
  /*    
   *    pixels.setPixelColor(i, 0x000000);
   *    pixels.setPixelColor(i, 0xFF8000);
   */
    pixels.setPixelColor(1, 0xFF0000);
    pixels.setPixelColor(2, 0xFF0000);
    pixels.setPixelColor(3, 0xFF0000);
    pixels.setPixelColor(4, 0xFF0000);
    pixels.setPixelColor(5, 0xFF0000);
    pixels.setPixelColor(6, 0xFF0000);
    pixels.setPixelColor(7, 0xFF0000);
    pixels.setPixelColor(8, 0xFF0000);
    pixels.setPixelColor(9, 0xFF0000);
    pixels.setPixelColor(10, 0xFF0000);
    pixels.setPixelColor(11, 0xFF0000);
    pixels.setPixelColor(0, 0xFF0000);
    pixels.show();
    Serial.println("test");
    for (int j = 255; j > 0; j-=5) {
      Serial.println(j);
      pixels.setBrightness(j);
      pixels.show();
      delay(100);
    }
    for (int k = 5; k <= 255; k+=5) {
      Serial.println(k);
      pixels.setBrightness(k);
      pixels.show();
      delay(100);
    }
    delay(100);
}
