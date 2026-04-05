#include <stdio.h>
#include <string.h>

int main(void){

    char s1[50] = "This is the first line.";
    char s2[] = "This is the second line.";

    strcat(s1, s2);
    printf("s1: %s\n", s1);

    return 0;




}
