#include <stdio.h>

int invert(int x, int p, int n)
{
    int result = x;
    int mask = ((1 << n) - 1) << p;
    result = result ^ mask;
    result;
}


int main() {
    int num, pos, count;

    printf("Enter number(x): ");
    scanf("%d", &num);

    printf("Enter position(p): ");
    scanf("%d", &pos);

    printf("Enter count(n): ");
    scanf("%d", &count);

    int ans = invert(num, pos, count);
    printf("Result: %d\n", ans);

    return 0;
}
