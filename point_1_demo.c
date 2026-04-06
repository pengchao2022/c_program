#include <stdio.h>

int main(void){
    int a = 10;
    int b = 5;
    int *p;
    p = &b;

    int *m;
    m = &a;

    printf("P is memory address: %p\n", p);
    printf("m is the a's memory address: %p\n", m);

    return 0;

}
