#include <stdio.h>

int main(void){
    const int end = 10;
    int x[end];

    

    for (int i = 0; i < end; i++)
    {
        x[i]= i;
        printf("element nr %d = %d, \n", i+1, x[i]);
    }

    int p[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int p1[10] = {0};  //initialisiert alle array einträge mit 0. gilt nur für 0, kann nicht durch andere zahl ersetzt werden
    char name[6] = "hello";
    char name1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char name2[] = "hello"; //diese 3 möglichkeiten funktionieren intern gleich.

    int quadratics[3][2] = {
        {1,1}, 
        {2,4},
        {3,9}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("{");
        for (int j = 0; j < 2; j++)
        {
            printf("%d", quadratics[i][j]);
        }
        printf("}\n");
    }
    

    return 0;
}