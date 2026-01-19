#include <stdio.h>
#include <stdlib.h>   // malloc, realloc, free

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory for 3 integers
    arr = (int*) malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Initial memory allocation failed");
        return 0;
    }

    // Step 2: Input first 3 values
    printf("Enter 3 integers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Reallocate memory for 6 integers
    arr = (int*) realloc(arr, 6 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed");
        return 0;
    }

    // Step 4: Input remaining 3 values
    printf("Enter 3 more integers:\n");
    for (i = 3; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print all 6 values
    printf("All elements are:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    // Step 6: Free memory
    free(arr);
    arr = NULL;
    printf("\n");
    return 0;
}