// Copy paste this blank sketch into a new .h file to create a new animation.
// RP2040 can hold about 1 minute total of animations at 30fps

// Export your video as .bmp sequence, named as 001.bmp etc
// Load them into image2cpp
// http://javl.github.io/image2cpp/
// Use the following settings (leave the rest default)
//    Background colour: Black
//    Dithering: Bayer or Atkinson look best IMO, but dealers choice here
//    Rotate image: 270*
//    Draw mode: Horizontal 1 bpp
//    ** Dont worry if image2cpp exports the frames out of order, it will still play correctly

// Change the name of this .h file and the if/define statements below to whatever your animation is called
// EG: dancing.h, DANCING_H, and dancingPlayCount

#ifndef BLANK_H
#define BLANK_H

// Number of times the animation will loop for
const int blankPlayCount = 1;

// Paste the output of image2cpp below
// Make sure to keep #endif at the very end of the post
// ---------------------------------------------------------------



// ---------------------------------------------------------------
#endif