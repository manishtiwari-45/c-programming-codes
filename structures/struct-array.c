#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;

    pokemon arr[3];
    arr[0].hp=100;
    arr[0].speed=100;
    arr[0].attack=100;
    arr[0].tier='A';
    strcpy(arr[0].name,"Pikachu");
    // printf("%s\n",arr[0].name);

    arr[1].hp=200;
    arr[1].speed=200;
    arr[1].attack=200;
    arr[1].tier='B';
    strcpy(arr[1].name,"Charizard");
    // printf("%s\n",arr[1].name);


    arr[2].hp=300;
    arr[2].speed=300;
    arr[2].attack=300;
    arr[2].tier='C';
    strcpy(arr[2].name,"Mewtwo");
    // printf("%s\n",arr[2].name);



    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d Hp\n",arr[i].hp);
        printf("%d Speed\n",arr[i].speed);
        printf("%d Attack\n",arr[i].attack);
        printf("%c Tier\n",arr[i].tier);
    }
    };
    