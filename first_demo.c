#include <stdio.h>
/*
Author: Allen Ma
Program: This program will caculate two int numbers and print the result
Description: For the demo purpose
Usage:
   compile the code: gcc first_demo.c -o first_demo 
   run the program:  ./first_demo
                           
*/

// int means the type of the return value 
// void means no parameters are accepted 
// main function is the beginning of a program
int main(void){

    int speed = 10;
    int time = 5;
    int distance;

    distance = speed*time;
    printf("Distance is: %d\n", distance);

    return 0; // this 0 type is matched with int in the beginning

}
