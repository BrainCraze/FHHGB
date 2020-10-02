#include <stdio.h>

int main(void){
    int x = 1;
    int y = 2;
    float f;

    printf("f = %d/%d\n", x,y);

    f = x / y;
    printf("ergebnis: %.2f\n", f); //int und int ergibt int
    f = (float)(x / y);
    printf("ergebnis: %.2f\n", f); //int und int ergibt int umgewandelt auf float ist falsch
    f = (float)x / y;
    printf("ergebnis: %.2f\n", f); //float und int ergibt float
    f = 1.0f*x / y;
    printf("ergebnis: %.2f\n", f); //float und int ergibt float.. aber unnötig

    int i = -1;
    unsigned int j = 2;

    if (i < j)
    {
        printf("%d < %d\n", i, j);
    }
    else{
        printf("%d > %d\n", i, j);
    }
    

    return 0;
}