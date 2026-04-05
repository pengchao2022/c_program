#include <stdio.h>


int main(void){
    int speed = 0; // initializa 
    int time = 0; 
    int distance = 0;
    printf("Please type your speed here:\n");
    scanf("%d", &speed);
    printf("Please type your time here:\n");
    scanf("%d", &time);
    distance = speed*time;
    printf("Your distance is: %d\n", distance);

    return 0;

}
