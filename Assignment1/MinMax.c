#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

//int main (int argc, char** argv)
int main (int argc, char* argv[]){

    long int min = 0, max = 0, number_to_compare;
    
    for (int i = 1; i < argc; i++) //starts at 1 because the first argument (argv[0]) ist he program name itself (./minmax) so the first real argument is argv[1].
    {
        errno = 0;
        number_to_compare = strtol(argv[i], NULL, 10);
        
        if ((errno == ERANGE && (number_to_compare == LONG_MAX || number_to_compare == LONG_MIN)) || (errno != 0 && number_to_compare == 0))
        {
            perror("strtol");
            exit(EXIT_FAILURE);
        }
        

        max = number_to_compare > max ? number_to_compare : max;
        min = number_to_compare < min ? number_to_compare : min;
    }

    printf("Minimum: %ld, Maximum: %ld \n", min, max);
    

    return 0;
}