#ifndef PLAYER_H_
#define PLAYER_H_

#include "Pistol.h"
#include "PlayerVitalData.h"

typedef struct {
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
} Player;

Player* setPlayer(int id, int playerHealth, int playerArmor);

#endif /* PLAYER_H_ */
