# RP2040_OLED_bmp_animator
  https://github.com/Babel-Infoc/RP2040_OLED_bmp_animator
  Display bitmap animations on portrait orientation OLED powered by RP2040 
  Written by Tully Jagoe using libraries from Arduino and Adafruit

  Hold "Boot" button while switching RP2040 on to upload code
  Duplicate blank.h to create new animations
  RP2040 with 64Mb flash can hold about 1 minute total of animations at 30fps, 2 minutes at 15fps

// ---------------------------------------------------------------

 Board descriptions:
 Arduino Mbed OS RP2040 

 Code libraries:
 Adafruit_GFX.h
 Adafruit_SSD1306.h

// ---------------------------------------------------------------

Known issues:
Due to a compatibility issue between Adafruit_SSD1306 and RP2040, 
make sure you are using Adafruit_SSD1306 version 2.5.7
(maybe Adafruit will fix this in a later version idk)