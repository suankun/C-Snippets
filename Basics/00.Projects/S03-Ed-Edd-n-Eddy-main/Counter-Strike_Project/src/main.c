#include "BattleField.h"
#include "Messages.h"
#include <stdlib.h>

int main() 
{
  BattleField battleField;

  if (!createPlayers(&battleField))
  {
    printIncorrectPlayerData();
    return EXIT_FAILURE;
  }

  if (!buyPistols(&battleField))
  {
    printIcorrectPistolData();
    return EXIT_FAILURE;
  }

  startBattle(&battleField);
  deinit(&battleField);

  return EXIT_SUCCESS;
}
