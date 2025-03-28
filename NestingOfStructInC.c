#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[28];
    } pokemon;

    typedef struct legendarpokemon{
        pokemon normal;
        char ability[100];
    
    }legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn Anyone to stone");
    
    return 0;
}