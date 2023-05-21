#ifndef PROTOSSACTIONS_H_
#define PROTOSSACTIONS_H_

#include "Ships.h"

void protossRegenerateShield(Vector *protossFleet);
bool ProtossAttack(BattleShip **currTerranShip, int i, size_t *terranShipID, BattleField *battleField, size_t *terranSize);

#endif /* PROTOSSACTIONS_H_ */
