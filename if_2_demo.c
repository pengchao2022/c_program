#include <stdio.h>

int main(void){
    float height = 160.0;
    float weight = 50.0;

    printf("Please type your heigh here:(cm)\n");
    scanf("%f", &height);
    printf("Please type your weight here:(kg)\n");
    scanf("%f", &weight);

    if (height >= 160.0 || weight >= 40.0)
    {
        printf("You are healthy!\n");
    }else{
        printf("Sorry you are not healthy!\n");

    }

    return 0;
    



}
