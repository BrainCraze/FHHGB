#include <stdio.h>



int main(void){

    //a)
    int i1 = 12; float f1 = 12.25;
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    double d1 = i1 + f1;
    printf("a) d = i + f -> = %f\n", d1);
    //b)
    int i2 = 1; char c2 = 'a';
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    int j2 = i2 + c2;
    printf("b) j = c + i -> j = %d\n", j2);
    //c)
    int i3 = 10; int i4 = 3; float f3 = 10.25;
    //Welche Konvertierungen werden durchgeführt und wie lautet das Ergebnis?
    //Was sollte man hier verbessern?
    double j3 = f3 + i3 / i4;
    printf("c) d = f + i / j  -> d = %f\n", j3);
    double j4 = f3 + (float)i3 / i4;
    printf("c_fixed) d = f + (float)i / j  -> d = %f\n", j4);
    //d) weggelassen weil nicht berechenbar
    //e)
    int x = -25;
    unsigned int y = 10;
    //Was wird hier ausgegeben? Warum?
    if( (x+y) < 0) printf("e) die Ausgabe ist: A\n");
    else printf("e) die Ausgabe ist: B\n");



    return 0;

}