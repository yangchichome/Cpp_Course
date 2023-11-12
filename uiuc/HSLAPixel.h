/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  class HSLAPixel {
  public:
    double h; // hue
    double s; // saturation
    double l; // luminance
    double a; // alpha (opacity)

    // Default constructor
    HSLAPixel() : h(0), s(0), l(0), a(1) {}

    // Constructor with parameters
    HSLAPixel(double hue, double saturation, double luminance, double alpha)
        : h(hue), s(saturation), l(luminance), a(alpha) {}
  };

} // namespace uiuc