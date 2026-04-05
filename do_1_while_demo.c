#include <stdio.h>

int main(void){
    int i = 100; 
    do
    {
        printf("i = %d\n", i);
        i++;

    } while (i < 5);
    
    return 0;


}

/*

the result is i = 100
for the do while loop, even not fullfill the while condition, but the code still can do one time 
then print i = 100

*/
