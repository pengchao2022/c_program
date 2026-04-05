#include <stdio.h>

int main(void){
    char my_letter = 'd'; // initialize
    printf("Please type your letter here:\n");
    scanf("%c", &my_letter);
    printf("Your letter is: %c\n", my_letter);

    return 0;
}
