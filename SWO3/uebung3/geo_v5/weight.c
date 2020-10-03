// weight.c

#include "weight.h"
#include "geo.h"

double weight (double width, double height, double depth, double density) {
   return volume(width, height, depth) * density;
}