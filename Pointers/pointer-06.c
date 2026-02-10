#include <stdio.h>

//swap without pointer

void swap(int *a, int *b);

int main(){
    int a = 14;
    int b = 24;

    printf("before a: %d\n", a);
    printf("before b: %d\n", b);


    // a = a^b;
    // b = a^b;
    // a = a^b;

    swap(&a, &b);

    printf(" after a: %d\n", a);
    printf(" after b: %d\n", b);

    return 0;

}

void swap(int *a, int *b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;  
}



