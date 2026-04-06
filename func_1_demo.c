#include <stdio.h>

int find_max(int a, int b){
    if (a > b)
    {
        return a;
    }else{
        return b;
    }
    
}

int main(void){
    int mx = find_max(5, 10);
    printf("max is: %d\n", mx);

    return 0;
    
}
