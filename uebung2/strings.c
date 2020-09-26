#include <stdio.h>
#include <string.h>

int main(void){
    
    char s[6] = "hello"; // = ['h', 'e', 'l', 'l', 'o', '\0']

    printf("%s \n", s);

    for (int i = 0; i < 8; i++)
    {
        printf("element %d = '%c' (%x) \n",i, s[i], s[i] );
    }
    printf("length of \"%s\" is %ld \n", s, strlen(s));

    char first[] = "Thomas"; //6 + 1 für \0 end of string
    char last[] = "Ringer"; // 6 + 1 wieder
    char full[14];     // 6 + 1 + 6 + 1  für ein leerzeichen und nullterminierung
    size_t n = 13;      //13 weil der letzte index 13 ist .. die länge ist 14 erster index ist 0

    printf("full = '%s'\n", full);
    strncpy(full, first, n);
    full[13] = '\0';
    printf("full = '%s'\n", full);
    strncat(full, " ", n);
    printf("full = '%s'\n", full);
    strncat(full, last, n);
    printf("full = '%s'\n", full);


    printf("strncmp(first, last) = %d\n", strncmp(first, last, n)); //strncmp gibt den ascii wert der differenz der ersten unterschiedlichen stelle an t-r =2
    printf("strncmp(first, last) = %d\n", strncmp(last, first, n)); // r-t = -2
    printf("strncmp(first, last) = %d\n", strncmp(last, last, n)); //alles gleich = 0 



    return 0;
}

