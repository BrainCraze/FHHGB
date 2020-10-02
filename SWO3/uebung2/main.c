#include <stdio.h>
#include <math.h>
#define SIZE 100 //echte konstante SIZE wird überall durch 100 ersetzt 
                //kann nicht überschrieben werden weil SIZE = 100 wäre 100 = 100
#define LONG_TXT "this is a very very very long text i will probably need a few times"

#define MIN(a,b) (((a) < (b)) ? (a) : (b))  //klammern wichtig weil a zb auch eine operation sein könnte

#define TRUE 1      //nicht empfehlenswert weil manche bibliotheken das oder enum bool implementiert haben in einer form
#define FALSE 0     //und es dadurch zu konflikten kommen kann



//typedef enum bool {false = 0, true = 1} bool; //typedef = neuer name für bestehtenden typen
//bool a = false;
/*
typdef int my_int; 
my_int a = 4;
//verwendet my_int als int
*/


const int size = 30;
const double pi = 3.14; //or M_PI from math.h

//zeichenkonstanten
// \n -> newline
// \r -> carriage return
// \t -> tabulator
// \a -> bell
// \ -> escape character
// \" -> " in string
// \o<123> -> octal value
// \x<abc> -> hex value
// \o -> null


int main (void){

    unsigned char c = 256; //wertebereich von 0 bis 255
    printf("the character %c\n", c);
    printf("the int %d\n", c);


    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
    }
    
    
    return 0;
}