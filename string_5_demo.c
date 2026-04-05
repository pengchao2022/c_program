#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char s1[] = "My Name iS ALLen MA";

    int length = strlen(s1);

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", s1[i]);
        if (isupper(s1[i]))
        {
            printf("%c: is Upper case\n", s1[i]);
        }
        if (islower(s1[i]))
        {
            printf("%c: is lower case:\n", s1[i]);
        }
    

    }

    return 0;
    
    
}
