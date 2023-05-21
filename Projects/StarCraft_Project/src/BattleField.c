#include "BattleField.h"
#include "Vector.h"
#include "Defines.h"
#include "Ships.h"
#include "TerranActions.h"
#include "ProtossActions.h"
#include "PrintInfo.h"

#include <stdio.h>

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr) //Generating From user input for Terran
{
  size_t capacity = 5;
  vectorInit(&battleField->terranFleet, capacity);
  int index = 0;

  BattleShip *ship = NULL;

  while (terranFleetStr[index] != '\0') //Iterate Thriugh the input string
  {
    if (terranFleetStr[index] == VIKING) //Set The VIKING if it is an VIKING
    {
      ship = setBattleShip(VIKING, VIKING_HEALTH);
      vectorPush(&battleField->terranFleet, ship);
    }
    else if (terranFleetStr[index] == BATTLE_CRUSER) //Set The BATTLE_CRUSER if it is an BATTLE_CRUSER
    {
      ship = setBattleShip(BATTLE_CRUSER, BATTLE_CRUSER_HEALTH);
      vectorPush(&battleField->terranFleet, ship);
    }

    ship = NULL;
    index++;
  }
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr) //Generating From user input for Protoss
{
  size_t capacity = 5;
  vectorInit(&battleField->protossFleet, capacity);
  int index = 0;

  ProtossBattleShip *ship = NULL;

  while (protossFleetStr[index] != '\0') //Iterate Thriugh the input string
  {
    if (protossFleetStr[index] == PHOENIX) //Set The Phoenix if it is an Phoenix
    {
      ship = setProtossBattleShip(PHOENIX, PHOENIX_SHIELD, PHOENIX_HEALTH);
      vectorPush(&battleField->protossFleet, ship);
    }
    else if (protossFleetStr[index] == CARRIER) //Set The Carrier if it is an Carrier
    {
      ship = setProtossBattleShip(CARRIER, CARRIER_SHIELD, CARRIER_HEALTH);
      vectorPush(&battleField->protossFleet, ship);
    }

    ship = NULL;
    index++;
  }
}


static void deinit(Vector *vec)
{
  size_t fleetSize = vectorGetSize(vec);
  void *battleShip = NULL;

  for (size_t i = 0; i < fleetSize; i++)
  {
    battleShip = vectorGet(vec, i);
    free(battleShip);
    battleShip = NULL;
  }
}

void startBattle(BattleField *battleField)
{
  size_t terranFleetSize = vectorGetSize(&battleField->terranFleet);
  size_t protossFleetSize = vectorGetSize(&battleField->protossFleet);

  if (terranFleetSize == 0)
  {
    printf("Terran don't have any battleships!\n");
    deinit(&battleField->protossFleet);
    return;
  }
  if (protossFleetSize == 0)
  {
    printf("Protoss don't have any battleships!\n");
    deinit(&battleField->terranFleet);
    return;
  }

  while (true)
  {
    if (processTerranTurn(battleField))
    {
      printf("TERRAN has won!\n");
      deinit(&battleField->terranFleet);
      break;
    }

    if (processProtossTurn(battleField))
    {
      printf("PROTOSS has won!\n");
      deinit(&battleField->protossFleet);
      break;
    }
  }
}

bool processTerranTurn(BattleField *battleField)
{ 
  ProtossBattleShip *protossShip = NULL;  
  static int roundCounter = 1;
  size_t protosShipID = 0;
  bool didTerranWin = false;
  size_t terranSize = vectorGetSize(&battleField->terranFleet);
  size_t protossSize = vectorGetSize(&battleField->protossFleet);

  for (size_t terranId = 0; terranId < terranSize; terranId++)
  {
    protosShipID = protossSize - 1;  
    protossShip = vectorBack(&battleField->protossFleet);

    didTerranWin = TerranAttack(&protossShip, roundCounter, terranId, battleField, &protosShipID, &protossSize); //checking in TerranAttack damage done, are ships destroyed and if they have killed Protoss Army.
    
    if (didTerranWin) 
    {
      return didTerranWin; //Returns True if they killed The Protoss Army and win the war.
    }
  }
  roundCounter++;

  printf("Last Protoss AirShip with ID: %zu has %d health and %d shield left\n", protosShipID, getProtossHealth(protossShip), getShield(protossShip));
  return didTerranWin; //Returns False If They didn't win
}

bool processProtossTurn(BattleField *battleField)
{ 
  size_t terranShipID = 0;
  bool didProtossWin = false;
  BattleShip *terranShip = NULL;
  size_t terranSize = vectorGetSize(&battleField->terranFleet);
  size_t protossSize = vectorGetSize(&battleField->protossFleet);

  for (size_t protosId = 0; protosId < protossSize; protosId++)
  {
    terranShipID = terranSize - 1;
    terranShip = vectorBack(&battleField->terranFleet);

    didProtossWin = ProtossAttack(&terranShip, protosId, &terranShipID, battleField, &terranSize); //checking in ProtossAttack damage done, are ships destroyed and if they have killed Terra Army.

    if (didProtossWin) 
    {
      return didProtossWin; //Returns True if they killed The Terra Army and win the war.
    }
  }

  printf("Last Terran AirShip with ID: %zu has %d health left\n", terranShipID, getTerranHealth(terranShip));
  protossRegenerateShield(&battleField->protossFleet);

  return didProtossWin; //Returns False If They didn't win
}
