#include<stdio.h>

int power(int m, int n);

int main()
{
    int n;
    int base;
    scanf("%d", &base);
    scanf("%d", &n);
    printf("Power of base to n is:  %d\n", power(base, n));
}

int power(int base, int power){
    int p = 1;
    while(power > 0){
        p = p *base;
        power--;
    }
    return p;
}