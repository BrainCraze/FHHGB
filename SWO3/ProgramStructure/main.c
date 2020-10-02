#include <stdio.h>
#include "lib.h"

void swap(int a, int b){
    a = b - a;
    b = b - a;
    a = a + b;
    printf("swapped: a = %d, b = %d\n", a, b);
}

void swap(int* a, int*b){
    //des ganze implementiert mit zeiger und temp variable
}

int main (void){

    int a = 1;
    int b = 6;

    printf("sum ? %d\n", sum(3,5));
    printf("übergeben an swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    return 0;
}