#include <stdio.h>

int main(){
    int a[] = {1,4,2,3,8};

    int *pa = &a[0];

    for(int i = 0; i <= 5; i++){
        printf("Address: %p\n",pa+i);
        printf("value: %d\n", *(pa+i));
    }
    printf("\n");
    // printf("Address: %p\n",pa+11111);
    printf("value: %d\n", *(pa+111110000));


    return 0;
}