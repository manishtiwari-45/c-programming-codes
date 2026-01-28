#include<stdio.h>

int main()
{
    int *pi;
    int i = 100;
    printf("Before: ");
    printf("%d\n", i);
    printf("%p\n", &i);
    pi = &i;
    *pi = 30;
    printf("After: %d\n", i);
}