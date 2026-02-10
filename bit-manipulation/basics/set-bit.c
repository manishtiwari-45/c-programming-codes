#include <stdio.h>

int main()
{
    unsigned int x = 13;   // 00001101
    int kth = 1;

    printf("Before-->%d:\n", x);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");


    x = x | (1 << kth);

    printf("After-->%d:\n", x);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");

    return 0;
}
