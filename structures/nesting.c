#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon norm;
    strcpy(norm.name,"NormalPokemon");

    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[100]; // nesting
    } legendarypokemon;

    legendarypokemon lpock;
    strcpy(lpock.normal.name,"lengendPokemon");

    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack; //nesting inside nesting
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn anyone to stone");
    strcpy(arceus.legend.normal.name,"GodPokemon");
    arceus.legend.normal.attack = 400;

    printf("%s\n", norm.name);
    printf("%s\n", lpock.normal.name);
    printf("%s\n", arceus.legend.normal.name);
    






































    {
        /* data */
    };
    

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.speed = 200;
    mewtwo.normal.attack = 100;
    strcpy(mewtwo.normal.name, "Mewtwo");
    return 0;
    
    
}