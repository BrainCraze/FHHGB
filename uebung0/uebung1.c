#include <stdio.h>

void print_hello(void){
    printf("Hello, World!\n");
}

void print_int(int i){
    printf("Integer: %d\n", i);
}

void test_variables(){
    int i =24;
    float f = 2.718f;
    double d = 2.718;
    char c = 'A';
    char* s = "Hello";

    printf("i: %d, f: %f, d: %f, c: %c, s: \"%s\"\n", i, f, d, c, s);
}

int main (void) {
    
    printf("hello world!\n");
    print_hello();
    print_int(5);
    test_variables();

    return 0;
}