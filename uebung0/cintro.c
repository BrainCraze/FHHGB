#include <stdio.h>


//int main (int argc, char** argv)
int main (int argc, char* argv[]){
    int a = 3, b = 3;

    if (a == b)
    {
        printf("equal\n");
    }
    else
    {
        printf("unequal\n");
    }
    

    int j = 0;

    while (j < 10)
    {
        j++;
        printf("j: %d\n", j);
    }


    return 0;
}