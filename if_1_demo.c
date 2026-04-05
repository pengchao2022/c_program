#include <stdio.h>

int main(void){

    float weight = 0;
    float height = 0;

    printf("Please type your weight here:\n");
    scanf("%f", &weight);
    printf("Plese type your height here:\n");
    scanf("%f", &height);

    if (weight > 150.0 && height > 160.0)
    {
        printf("You are healthy!\n");
    }else
    {
        printf("You are not healthy!\n");
    }

    return 0;
    
    

}
