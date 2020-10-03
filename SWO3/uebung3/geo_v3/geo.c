// geo.c

#include "geo.h"

double area(double width, double height) {
   return width * height;
}

double volume(double width, double height, double depth) {
   return area(width, height) * depth;
}