#include <stdio.h>
#include <stdlib.h>

//int main (int argc, char** argv)
int main (int argc, char* argv[]){
    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        /* code */
        //sum += atoi(argv[i]);
        int num = 0;
        int count = sscanf(argv[i], "%d", &num);
        sum += num;
    }

    printf("sum %d\n", sum);
    
    
    return EXIT_SUCCESS; // return 0;
}