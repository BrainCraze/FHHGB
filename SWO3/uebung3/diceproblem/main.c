#include <stdio.h>
#include "dice.h"

#define DEBUG(x) printf("%s = %d\n", (#x), (x))

int main (void){
    DEBUG(n_rolls_nested(3));
    DEBUG(n_rolls_nested(7));
    DEBUG(n_rolls_nested(0));
    DEBUG(n_rolls_nested(10));

    print_statistics();
    return 0;
}