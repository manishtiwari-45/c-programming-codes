#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon // global declaration
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 70;
    pikachu.attack = 90;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    // int*x --> address of integer value
    pokemon* x = &pikachu; // stores address of first--> hp attribute
    // printf("%p\n",&pikachu.hp); // address of pikachu structure
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",pikachu.name);
    // printf("%p\n",x);

    (*x).hp = 70; 
    // we can changes original values through pointers
    printf("%d\n",pikachu.hp);
    

    return 0;
}