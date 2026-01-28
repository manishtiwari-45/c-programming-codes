#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int firstBit = (num >> 7) & 1;
    
    if (firstBit == 1) {
        printf("The number %d is NEGATIVE\n", num);
    } else {
        printf("The number %d is POSITIVE\n", num);
    }
    
    return 0;
}
