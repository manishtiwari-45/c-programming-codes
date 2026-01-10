#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first No. :");
    scanf("%d",&a);
    printf("Enter second No. :");
    scanf("%d",&b);
    int q = a/b;
    int r = a - (b*q);
    printf("%d",r);
    return 0;
}