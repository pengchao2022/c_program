#include <stdio.h>

int main(void){
    float height = 0;
    printf("Please type your height here:\n");
    scanf("%f", &height);

    if (height >= 160 && height < 180)
    {
        printf("Your height is Okay!\n");
    }else if (height >= 180)
    {
        printf("You are so tall!\n");
    }else{
        printf("Your height is not qualified!\n");
    }
    
    
}
