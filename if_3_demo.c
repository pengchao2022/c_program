#include <stdio.h>

int main(void){


    int realNum = 500;
    int guessNum = 0;

    printf("Please type your guess number here:\n");
    scanf("%d", &guessNum);

    if (guessNum != realNum)
    {
        printf("Your guess is wrong!\n");
    }
    else{
        printf("genius, Your guess is correct!\n");
    }

    return 0;
    
}
