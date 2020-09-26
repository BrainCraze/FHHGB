#include <stdio.h>


//int main (int argc, char** argv)
int main (int argc, char* argv[]){
    if (argc != 2)
    {
        printf("Wrong number fo arguents: expected 2 got %d\n", argc);
        printf("Usage: %s <arg>\n", argv[0]);
        return -1;
    }
    printf("arg = \"%s\"\n", argv[1]);
    
    return 0;
}