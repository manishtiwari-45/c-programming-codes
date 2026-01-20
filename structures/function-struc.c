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

void fun(pokemon p){
    printf("%d\n", p.hp);
    return;
}

void change(pokemon p){
    p.hp = 70;
    p.attack = 50;
    p.speed = 110;
    // printf("%d\n",p.hp);
    // printf("%d\n",p.attack);
    // printf("%d\n",p.speed);
    return;
}

int main()
{
    pokemon pikachu;
    pikachu.hp = 1;
    pikachu.attack = 2;
    pikachu.speed = 3;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    // fun(pikachu);
    printf("After change:\n");
    change(pikachu); // makes new pokemon struc with same values
    // original pikachu remain same 
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
}