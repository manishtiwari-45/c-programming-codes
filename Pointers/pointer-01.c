#include <stdio.h>

//declare a pointer to modify the value of x

int main(){
    int x = 24;

    printf("x: %d\n", x);

    int *p = &x;

    printf("address of x: %p\n", p);
    
    *p = 12;
    printf("x: %d\n", x);
    printf("address of x: %p\n", p);

    

    return 0;
}