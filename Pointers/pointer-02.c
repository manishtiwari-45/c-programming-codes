#include <stdio.h>

void swap(int *a, int *b){
  
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int b = 8;

    printf("value of a before:  %d\n", a);
    printf("value of b before:  %d\n", b);

    swap(&a, &b); 

    printf("value of a after: %d\n", a);
    printf("value of b after:  %d\n", b);
    return 0;
}