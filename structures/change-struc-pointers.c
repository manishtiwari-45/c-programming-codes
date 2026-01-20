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
    (*p).hp = 100;
    (*p).attack = 100;
    (*p).speed = 100;
    (*p).tier = 'B';
    strcpy((*p).name,"NewName");
    return;
}


int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");

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