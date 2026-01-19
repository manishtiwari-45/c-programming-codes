#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Enter number of element: ");
    scanf("%d", &n);

    // dynamic array allocation using calloc
    arr = (int*) calloc(n,sizeof(int));

    // check if memory allocation failed
    if(arr == NULL){
        printf("Memory allocation failed");
        return 0;
    }
    printf("Default Values (after calloc): \n");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]); // all values will be 0
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    
    return 0;
}