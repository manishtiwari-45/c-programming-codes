#include <stdio.h>
#include <stdlib.h>   // for malloc, free

int main()
{
    int n;
    int *arr;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    arr = (int*) malloc(n * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    // Taking input
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing values
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);
    printf("\n");

    return 0;

}