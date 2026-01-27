#include <stdio.h>

int isPowerOfTwo(int n) {
    if (n > 0) {
        if(((n & (n - 1)) == 0)){
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
