#include "Ships.h"
#include "Defines.h"
#include "Ships.h"
#include <stdlib.h>
#include <stdio.h>

struct battleShip
{
    int health;
    char name;
};

struct protossBattleShip
{
    BattleShip battleShipStats;
    int shield;
};

ProtossBattleShip* setProtossBattleShip(char shipType, enum AirShipDefines shield, enum AirShipDefines health)
{
    ProtossBattleShip *ship =  malloc(sizeof(struct protossBattleShip));
    ship->battleShipStats.health = health;
    ship->battleShipStats.name = shipType;
    ship->shield = shield;

    return ship;
}

BattleShip *setBattleShip(char shipType, enum AirShipDefines health)
{
    BattleShip *ship = malloc(sizeof(struct battleShip));
    ship->health = health;
    ship->name = shipType;

    return ship;
}
int getProtossHealth(ProtossBattleShip *ship){
    return ship->battleShipStats.health;
}

int getTerranHealth(BattleShip *ship)
{
    return ship->health;
}

char getTerranShiptype(BattleShip *ship)
{
    return ship->name;
}

char getProtossShipType(ProtossBattleShip *ship)
{
    return ship->battleShipStats.name;
}

int getShield(ProtossBattleShip *ship)
{
    return ship->shield;
}

void decreaseHealth(ProtossBattleShip **ship, int damage)
{
    (*ship)->battleShipStats.health -= damage;
}

void decreaseTerranHealth(BattleShip **ship, int damage)
{
    (*ship)->health -= damage;
}

void overShieldDamage(ProtossBattleShip **ship, int damage){
    (*ship)->battleShipStats.health += damage;
}

void decreaseShield(ProtossBattleShip **ship, int damage)
{
    (*ship)->shield -= damage;
}

void regenerateShield(ProtossBattleShip **ship, int shieldRate)
{
    (*ship)->shield += shieldRate;
}

void setShield(ProtossBattleShip **ship, int value)
{
    (*ship)->shield = value;
}
