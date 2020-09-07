/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author CS 225: Data Structures
 * @version 2018r1-lab1
 */

#include "HSLAPixel.h"
#include <cmath>
#include <iostream>
using namespace std;

namespace cs225 {

    //default constructor
    cs225::HSLAPixel::HSLAPixel() {

        h = 0;
        s = 0;
        l = 1;
        a = 1;
    }


    //semidefault1
    cs225::HSLAPixel::HSLAPixel	(double enterHue,
                                 double enterSaturation,
                                 double enterLuminance) {
        h = enterHue;
        s = enterSaturation;
        l = enterLuminance;
        a = 1;
    }
    /*
    cs225::HSLAPixel::HSLAPixel	(double enterHue,
                                 double enterAlpha,
                                 double enterLuminance) {
        h = enterHue;
        s = 1;
        l = enterLuminance;
        a = enterAlpha;
    }
    //semidefault 3
    cs225::HSLAPixel::HSLAPixel (double enterHue,
                                 double enterSaturation,
                                 double enterAlpha) {
        h = enterHue;
        s = enterSaturation;
        l = 1;
        a = enterAlpha;
    }*/

    // all entered constructor
    cs225::HSLAPixel::HSLAPixel (double enterHue,
                                 double enterSaturation,
                                 double enterLuminance,
                                 double enterAlpha) {
        h = enterHue;
        s = enterSaturation;
        l = enterLuminance;
        a = enterAlpha;
    }
    

}
