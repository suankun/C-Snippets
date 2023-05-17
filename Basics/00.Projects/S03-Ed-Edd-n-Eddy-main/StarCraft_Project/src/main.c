#include <stdio.h>
#include <stdlib.h>
#include "BattleField.h"

int main() {
  const int buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
  scanf("%s %s", terranFleet, protossFleet); //Scanning User input To start The Game

  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet); //Generating From user input for Terran
  generateProtossFleet(&battleField, protossFleet); //Generating From user input for Protoss
  startBattle(&battleField); //Starting

  //Freeing when Game is finished
  vectorFree(&battleField.protossFleet); 
  vectorFree(&battleField.terranFleet);

  return EXIT_SUCCESS;
}
