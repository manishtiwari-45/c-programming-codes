#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Even Number\n");
    }
    else {
        printf("Odd number\n");
    }
    return 0;
}