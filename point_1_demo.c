#include <stdio.h>

int main(void){
    int a = 10;
    int b = 5;
    int c = 20;
    int *p;
    p = &b;

    int *m;
    m = &a;

    printf("P is memory address: %p\n", p);
    printf("m is the a's memory address: %p\n", m);
    printf("&c is c's memory address: %p", &c);

    return 0;

}
