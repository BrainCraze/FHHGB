#include <stdio.h>

int main(void){
    const int end = 10;
    int x[end];

    

    for (int i = 0; i < end; i++)
    {
        x[i]= i;
        printf("element nr %d = %d, \n", i+1, x[i]);
    }
    

    return 0;
}