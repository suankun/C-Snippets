#ifndef SHIPS_H_
#define SHIPS_H_

#include "Defines.h"
#include "BattleField.h"
#include "Vector.h"

typedef struct battleShip BattleShip;
typedef struct protossBattleShip ProtossBattleShip;

ProtossBattleShip* setProtossBattleShip(char shipType, enum AirShipDefines shield, enum AirShipDefines health);
BattleShip *setBattleShip(char shipType, enum AirShipDefines health);

int getTerranHealth(BattleShip *ship);
char getTerranShiptype(BattleShip *ship);
void decreaseTerranHealth(BattleShip **ship, int damage);

int getProtossHealth(ProtossBattleShip *ship);
char getProtossShipType(ProtossBattleShip *ship);
int getShield(ProtossBattleShip *ship);
void decreaseHealth(ProtossBattleShip **ship, int damage);
void overShieldDamage(ProtossBattleShip **ship, int damage);
void decreaseShield(ProtossBattleShip **ship, int damage);
void regenerateShield(ProtossBattleShip **ship, int shieldRate);
void setShield(ProtossBattleShip **ship, int value);

#endif /* SHIPS_H_ */
