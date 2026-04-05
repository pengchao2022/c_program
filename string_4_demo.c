#include <stdio.h>
#include <string.h>

int main(void){
    char s1[] = "My name is Allen ma.";
    char s2[] = "My name is Allen ma.";

    if (strcmp(s1, s2) == 0)
    {
        printf("s1 and s2 are the same!\n");
    }else
    {
        printf("s1 and s2 are the different strings\n");
    }

    return 0;


    
}
