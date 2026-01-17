#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d\n",arr[0]); // Way - 01 --> Best practice
    printf("%d\n",0[arr]); // Way - 02
    printf("%d\n", *(arr+0)); // Way - 03
    return 0;
}