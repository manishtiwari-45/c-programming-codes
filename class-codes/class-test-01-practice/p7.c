#include <stdio.h>

int bitcount(int n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int ans = bitcount(num);
    printf("Number of set bits in %d is: %d\n", num, ans);

    return 0;
}
