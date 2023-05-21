#include "Player.h"
#include <stdlib.h>

Player* setPlayer(int id, int playerHealth, int playerArmor)
{
    Player *player = malloc(sizeof(Player));

    player->playerId = id;
    setPlayerVitalData(&(player->playerData), playerHealth, playerArmor);

    return player;
}