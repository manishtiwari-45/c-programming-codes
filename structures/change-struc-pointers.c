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

void change(pokemon* p){
    (*p).hp = 100;    // first way to do
    p->attack = 50;   // second way 
    p->speed = 200; // (*x).something == x->something
    p->tier = 'B';
    strcpy(p->name,"NewName");
    return;
}


int main()
{
    // pokemon pikachu;
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 90;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"Pikachu");

    pokemon pikachu = {60,70,100,'A',"Pikachu"}; // better way to initialise structure 

    printf("Name: %s\n",pikachu.name);
    printf("HP: %d\n",pikachu.hp); 
    printf("Speed: %d\n",pikachu.speed);
    printf("Attack: %d\n",pikachu.attack);
    printf("Tier: %c\n",pikachu.tier);
    

    change(&pikachu);

    printf("Values after change through pointer: \n");

    printf("Name: %s\n",pikachu.name);
    printf("HP: %d\n",pikachu.hp); 
    printf("Speed: %d\n",pikachu.speed);
    printf("Attack: %d\n",pikachu.attack);
    printf("Tier: %c\n",pikachu.tier);
    
    return 0;
}