// count 1 bits in number

#include<stdio.h>

int bitcount(unsigned x)
{
    int b;
    for(b = 0; x != 0; x >>= 1){
        if(x & 01){
            b++;
        }
    }
    return b;
}

//Method 02  --> faster 
// int bitcount(unsigned x)
// {
//     int b = 0;
//     while(x != 0){
//         x = x & (x-1);
//         b++;
//     }
//     return b; 
// }

int main()
{   
    printf("%d\n",bitcount(3));
    printf("%d\n",bitcount(7));
    printf("%d\n",bitcount(15));
    
    return 0;
}
