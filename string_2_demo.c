#include <stdio.h>
#include <string.h>

int main(void){

    char s1[] = "This is the day I have been waiting for two and half years.";

    int length = 0;
    length = strlen(s1);
    int num_a = 0;

    for (int i = 0; i < length; i++)
    {   
        if (s1[i] == 'a')
        {
            num_a++;
        }
        
    }

    printf("a pops out %d times\n", num_a);
    return 0;
    
    
}
