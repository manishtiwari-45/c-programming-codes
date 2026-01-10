#include<stdio.h>

int main()
{
    float farh, cel;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;
    cel = lower;

    while (cel <= upper){
        farh = (9.0/5.0)*cel + 32;
        printf("%4.1f%6.0f\n",cel,farh);
        cel = cel + 20;
    }
    return 0;
}

// Using for loop

// #include<stdio.h>

// #define LOWER 0
// #define UPPER 300
// #define STEP 20
// int main()
// {
//     int farh;
//     for(farh = 0; farh <= 300; farh = farh + 20)
//         printf("%3d %6.1f\n", farh, (5.0/9.0)*(farh-32));
//     return 0;
// }
