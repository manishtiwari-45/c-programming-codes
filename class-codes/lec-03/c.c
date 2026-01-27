#include<stdio.h>

int main()
{
    int x;
    x = -125;
    printf("%x\n",x);
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
    int y = -x;
    printf("%x\n",y);
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (y >> i) & 1);
    }
    printf("\n");

    return 0;
    
}