#include<stdio.h>

int main()
{
    int a,b;
    printf("A B | AND OR XOR\n");
    printf("-------------\n");
    for(a = 0; a < 2;a++){
        for(b =0; b<2;b++){
            printf("%d %d | %d    %d   %d\n",a,b, a&b,a|b, a^b);
        }
    }
    return 0;
}