#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];

    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}