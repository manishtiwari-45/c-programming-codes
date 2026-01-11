#include <stdio.h>

float fahr_to_cel(float fahr);

int main()
{
    int lower = 0;
    int upper = 1000;
    int step = 20;
    float fahr, cel;

    for (fahr = lower; fahr <= upper; fahr += step) {
        cel = fahr_to_cel(fahr);
        printf("%6.1f %6.1f\n", fahr, cel);
    }

    return 0;
}

float fahr_to_cel(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}
