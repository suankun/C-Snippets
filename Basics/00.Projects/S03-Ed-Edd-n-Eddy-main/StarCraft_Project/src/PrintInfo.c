#include "PrintInfo.h"
#include "Defines.h"

void printKilledShip(char shipType, size_t killerId, size_t KilledId)
{
  char *shipName = NULL;

  if (shipType == VIKING)
  {
    shipName = "Viking";
  }
  else if (shipType == BATTLE_CRUSER)
  {
    shipName = "BattleCruser";
  }
  else if (shipType == CARRIER)
  {
    shipName = "Carrier";
  }
  else
  {
    shipName = "Phoenix";
  }

  printf("%s with ID: %zu killed enemy airship with ID: %zu\n", shipName, killerId, KilledId);
}
