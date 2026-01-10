#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float toFaren(int cel);

int main()
{
    int cel;
    float farh;

    for (cel = LOWER; cel <= UPPER; cel = cel + STEP) {
        farh = toFaren(cel);
        printf("%3d %6.1f\n", cel, farh);
    }

    return 0;
}

float toFaren(int n)
{
    float farh;
    farh = (9.0 / 5.0) * n + 32.0;
    return farh;
}
