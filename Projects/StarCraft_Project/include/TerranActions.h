#ifndef TERRANACTIONS_H_
#define TERRANACTIONS_H_

#include "Ships.h"

bool TerranAttack(ProtossBattleShip **currProtossShip, int roundCounter, size_t terranID, BattleField *battleField,size_t *protosShipID,size_t *protossSize);

#endif /* TERRANACTIONS_H_ */
