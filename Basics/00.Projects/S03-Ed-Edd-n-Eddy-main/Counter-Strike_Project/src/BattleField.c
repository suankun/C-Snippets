#include "BattleField.h"
#include "Messages.h"
#include "Action.h"
#include "Validations.h"
#include <stdlib.h>
#include <stdio.h>

bool createPlayers(BattleField *battleField) 
{
  int playerHealth = 0;
  int playerArmor = 0;

  for (int id = 0; id < PLAYERS_COUNT; ++id) 
  {
    scanf("%d %d", &playerHealth, &playerArmor);

    if (!validatePlayerData(playerHealth, playerArmor))
    {
      return false;
    }
    
    battleField->players[id] = setPlayer(id, playerHealth, playerArmor);
  }

  return true;
}

bool buyPistols(BattleField *battleField) 
{
  Player* player = NULL;
  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  for (int id = 0; id < PLAYERS_COUNT; ++id) 
  {
    scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
        &pistolRemainingAmmo);
    
    if (!validatePistolData(pistolId, pistolDamagePerRound, pistolClipSize))
    {
      return false;
    }

    player = battleField->players[id];
    setPlayerPistol(&player->pistol, pistolId, pistolDamagePerRound, 
                    pistolClipSize, pistolRemainingAmmo);
  }

  return true;
}

void startBattle(BattleField *battleField) 
{
  Player *playerOne = battleField->players[PLAYER_ONE];
  Player *playerTwo = battleField->players[PLAYER_TWO];
  
  while (true)
  {
    turnToShoot(playerOne, &(playerTwo->playerData));
    if (isDead(playerTwo->playerData.health))
    {
      printWinnerId(playerOne->playerId);
      break;
    }
    
    turnToShoot(playerTwo, &(playerOne->playerData));
    if (isDead(playerOne->playerData.health))
    {
      printWinnerId(playerTwo->playerId);
      break;
    }

    if (!playerOne->pistol.hasAmmoLeft && 
        !playerTwo->pistol.hasAmmoLeft)    
    {
      printPlayersRunOutOfAmmos();
      break;
    }
  }
}

void deinit(BattleField* battleField)
{
  for (int i = 0; i < PLAYERS_COUNT; i++)
  {
    free(battleField->players[i]);
  }
}