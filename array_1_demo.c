#include <stdio.h>


int main(void){
    int grade[5];
    grade[0] = 92;
    grade[1] = 85;
    grade[2] = 72;
    grade[3] = 73;
    grade[4] = 95;

    for (int i = 0; i < 5; i++){
        printf("grade[%d]=%d\n", i, grade[i]);

    }

    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + grade[i];
    }
    printf("total = %d\n", total);

    float average = 0;
    average = total / 5;
    printf("average = %f\n", average);

    return 0;





}
