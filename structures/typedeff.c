#include<stdio.h>

// First thing

// typedef float realNum;
// int main()
// {
//     int x;
//     //float y;
//     realNum y = 3.1415;
//     printf("%f\n",y);
//     return 0;
// }

// Second thing --> pointer as alias
typedef int* pointer;

int main()
{
    int x = 5, y = 7;
    pointer a = &x, b = &y; 

    printf("%d\n",*a);
    printf("%p\n", a);
    printf("%d\n",*b);
    printf("%p\n", b);

}

