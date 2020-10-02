#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){

    int min = 0, max = 0, number_to_compare;
    
    for (int i = 1; i < argc; i++) //starts at 1 because the first argument (argv[0]) ist he program name itself (./minmax) so the first real argument is argv[1].
    {
        number_to_compare = atoi(argv[i]);
       

        max = number_to_compare > max ? number_to_compare : max;
        min = number_to_compare < min ? number_to_compare : min;
    }

    printf("Minimum: %d, Maximum: %d \n", min, max);
    

    return 0;
}