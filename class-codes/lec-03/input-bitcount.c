// count 1 bits in number

#include<stdio.h>

int bitcount(unsigned x)
{
    int b = 0;
    while(x != 0){
        x = x & (x-1);
        b++;
    }
    return b; 
}

int main()
{   
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Total number of 1's bits are: %d\n",bitcount(n));
    
    return 0;
}
