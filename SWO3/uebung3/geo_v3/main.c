// file:main.c

#include <stdio.h>

#include "geo.h"
#include "weight.h"

int main() {
   double w = weight(80, 60, 30, 0.37);
   printf("Weight(80, 60, 30, 0.37) = %g \n", w);
   return 0;
}