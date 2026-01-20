#include<stdio.h>

typedef struct person{
    int age;
    float weight;
} person;

int main()
{
    person p1, p2;

    person *p3;

    p1.age = 20;
    p1.weight = 50.5;

    p2 = p1;  // structure copy
    p3 = &p1; // pointer to structure

    printf("%d\n", p1.age);
    printf("%.1f\n", p1.weight);

    printf("%d\n", p2.age);
    printf("%.1f\n", p2.weight);

    printf("%d\n", (*p3).age);
    printf("%.1f\n", (*p3).weight);

    return 0;
}