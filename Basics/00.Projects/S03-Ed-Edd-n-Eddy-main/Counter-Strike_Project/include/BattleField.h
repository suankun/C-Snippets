#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include "Player.h"
#include "Defines.h"
#include <stdbool.h>

typedef struct {
  Player* players[PLAYERS_COUNT];
} BattleField;

bool createPlayers(BattleField* battleField);
bool buyPistols(BattleField* battleField);
void startBattle(BattleField* battleField);
void deinit(BattleField* BattleField);

#endif /* BATTLEFIELD_H_ */
