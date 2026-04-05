#include <stdio.h>

int main(void){
    int grade[5] = {92, 85, 72, 73, 95};

    for (int i = 0; i < 5; i++)
    {
        printf("grade[%d]=%d\n", i, grade[i]);
       
    }
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + grade[i];
    }
    printf("Average=%d\n", total / 5);

    return 0;
    
    
}
