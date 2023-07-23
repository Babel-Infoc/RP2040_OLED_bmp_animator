/*
  // ---------------------------------------------------------------
    https://github.com/Babel-Infoc/RP2040_OLED_bmp_animator
    Display bitmap animations on portrait orientation OLED powered by RP2040 
    Written by Tully Jagoe using libraries from Arduino and Adafruit

    Hold "Boot" button while switching RP2040 on to upload code
    Duplicate blank.h to create new animations
    RP2040 with 64Mb flash can hold about 1 minute total of animations at 30fps, 2 minutes at 15fps
  // ---------------------------------------------------------------
*/

// Core library dependancies
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "boot.h"

// Include the animation files,
// playcount defines the numer of times an animation will loop for
#include "babel.h"
#include "robo_girl.h"
#include "blank.h"

// Adjust this value to control animation speed (66ms=15fps, 33=30fps)
const int frameDelay = 33; 

// Oled setup
#define SSD1306_NO_SPLASH
#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 64
#define OLED_MOSI   1
#define OLED_CLK    0
#define OLED_DC     3
#define OLED_CS     4
#define OLED_RESET  2
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

// ---------------------------------------------------------------
// Boot sequence and function calls
void setup() {
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.drawBitmap(0, 0, boot, 128, 64, WHITE);
  display.display();
  delay(3000);
}

// ---------------------------------------------------------------
// Animation loops
void loop() {

  // Robot Girl demo
  for (int j = 0; j < robo_girlPlayCount; j++) {
    for (int i = 0; i < robo_girl_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, robo_girl_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

  // Babel demo
  for (int j = 0; j < babelPlayCount; j++) {
    for (int i = 0; i < babel_frame_allArray_LEN; i++) {
      display.clearDisplay();
      display.drawBitmap(0, 0, babel_frame_allArray[i], 128, 64, WHITE);
      display.display();
      delay(frameDelay);
    }
  }

}