/**
 * @file HSLAPixel.h
 *
 * @author CS 225: Data Structures
 */

#pragma once

namespace cs225 {
        class HSLAPixel {

    public:
        double h;
        double s;
        double l;
        double a;

    public:
        HSLAPixel(double enterHue, double enterSaturation, double enterLuminance, double enterAlpha);
        //HSLAPixel(double enterHue, double enterLuminance, double enterAlpha);
        HSLAPixel(double enterHue, double enterSaturation, double enterLuminance);
        //HSLAPixel(double enterHue, double enterSaturation, double enterAlpha);
        HSLAPixel();


    };
}
