#include<stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

// int main()
// {
//     int farh, cel;
//     int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // farh = lower;
    // /*all variables must be declared before they are used, usually at the
    // beginning of the function before any executable statements.*/

    // while(farh <= upper){
    //     cel = 5 * (farh-32) / 9;
    //     printf("%d\t%d\n", farh, cel);
    //     farh = farh + step;
    // }
    // return 0;
// }
// to get more accurate answers we should use foating point numbers
// The second version:

int main()
{
    float farh, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    printf("The Tempertures in Faren & Cel are: \n");
    while(farh <= upper){
        cel = (5.0/9.0)*(farh - 32.0);
        printf("%3.0f%6.1f\n", farh, cel);
        farh = farh + step;
    }
    return 0;
}

