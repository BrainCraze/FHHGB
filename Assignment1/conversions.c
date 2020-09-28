#include <stdio.h>



int main(void){

    //a)
    int i1 = 12; float f1 = 12.25;
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    double d1 = i1 + f1;
    printf("erwartete convertierung von int in float zu double mit erwartetem ergebnis 24.25 und richtigem ergebnis: %f\n", c);
    //b)
    int i2 = 1; char c2 = 'a';
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    int j2 = i2 + c2;
    printf("convertierung von char in int mit erwartetem erwartetem ergebnis 98 und berechnetem ergebnis: %d\n", j2);
    //c)
    int i3 = 10; int i4 = 3; float f3 = 10.25;
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    //Was sollte man hier verbessern?
    double j3 = f3 + i3 / i4;
    printf("hier wird zuerst die division zweier int zahlen durchgeführt und das ergebnis als int angegeben\n, was bewirkt, dass die kommazahlen wegfallen und somit das ergbnis 3 ist statt 3.333
    \ndanach wird eine float zahl addiert und das ganze zu double convertiertm was als ergebnis 13.25 liefert statt 13.583333\n
    zur verbesserung hier am besten das g auf float oder double explizit casten (float)g / h + i\n
    ergibt bei der rechnung: %f\n", j3);
    // d)
    // char c4; int i5; float f4; double j4;
    // //Welchen Typ hat dieser Ausdruck?
    // (c + i) * (f / d);
    // //der typ sollte Double sein
    // printf("das erwartete ergebnis ist double das wirkliche ergebnis ist: %f", (c + i) * (f / d));
    // //e)
    // int x = -25;
    // unsigned int y = 10;
    // //Was wird hier ausgegeben? Warum?
    // if( (x+y) < 0) printf("A\n");
    // else printf("B\n");



    return 0;

}