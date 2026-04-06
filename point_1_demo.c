#include <stdio.h>

int main(void){
    int a = 10;
    int b = 5;
    int c = 20;
    int *p; // declare p is a pointer 
    p = &b;

    int *m;
    m = &a;

    int *j; // declare j is a pointer 
    j = &c;
    *j = *j + 200;

    printf("P is memory address: %p\n", p);
    printf("m is the a's memory address: %p\n", m);
    printf("&c is c's memory address: %p\n", &c);
    printf("*j is: %d\n", *j);

    return 0;

}
