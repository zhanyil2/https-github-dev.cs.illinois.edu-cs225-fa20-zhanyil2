#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

using cs225::HSLAPixel;
using cs225::PNG;

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  cs225::PNG inPic, outPic;
  inPic.readFromFile(inputFile);
  outPic = inPic;
  for (unsigned x = 0; x < inPic.width(); x++) {
    for (unsigned y = 0; y < inPic.height(); y++) {
      cs225::HSLAPixel & CurPixel = inPic.getPixel(x, y);
      outPic.getPixel(inPic.width() - x - 1, inPic.height() - y - 1) = CurPixel;

    }
  }
  outPic.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0; y < 0.5 * png.height(); y++) {
        png.getPixel(x,y)= HSLAPixel(16,1, 0.4, 0.8);
        //png.getPixel(x,y).l = 0.4;
      }
  }

  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0.5 * png.height(); y > 0; y--) {
       png.getPixel(x,y)= HSLAPixel(218, 0.7, 0.4, 0.5);
       //png.getPixel(x,y).l = 0.8;
    }
  }
  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0.3 * png.height(); y > 0; y--) {
        png.getPixel(x,y)= HSLAPixel(289, 0.1, 0.6, 0.7);
        //png.getPixel(x,y).l = 0.8;
    }
  }

  return png;
}
