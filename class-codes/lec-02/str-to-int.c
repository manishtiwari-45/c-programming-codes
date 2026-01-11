#include <stdio.h>

int main()
{
    int num = 0;
    int c;

    while ((c = getchar()) != EOF && c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
    }

    printf("%d\n", num);
    return 0;
}
