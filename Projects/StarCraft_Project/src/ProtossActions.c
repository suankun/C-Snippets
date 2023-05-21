#include "ProtossActions.h"
#include "Defines.h"
#include "Vector.h"
#include "Ships.h"
#include "PrintInfo.h"

static void phoenixAttack(BattleShip *currTerranShip) //Phoenix Attack
{
    decreaseTerranHealth(&currTerranShip, PHOENIX_DAMAGE);
}

static void carrierAtack(BattleShip *currTerranShip) //Carrier Attack
{
    decreaseTerranHealth(&currTerranShip, CARRIER_DAMAGE);
}

static void regeneratePhoenixShield(ProtossBattleShip *ship) // Phoenix Shield Regen
{
    if ((getShield(ship) + PHOENIX_SHIELD_REGENERATE_RATE) >= PHOENIX_SHIELD)
    {
        setShield(&ship, PHOENIX_SHIELD);
    }
    else
    {
        regenerateShield(&ship, PHOENIX_SHIELD_REGENERATE_RATE);
    }
}

static void regenerateCarierShield(ProtossBattleShip *ship) //Carrier Shield Regen
{
    if ((getShield(ship) + CARRIER_SHIELD_REGENERATE_RATE) >= CARRIER_SHIELD)
    {
        setShield(&ship, CARRIER_SHIELD);
    }
    else
    {
        regenerateShield(&ship, CARRIER_SHIELD_REGENERATE_RATE);
    }
}

void protossRegenerateShield(Vector *protossFleet) //Pasive Regen of Shield After a Round
{
    ProtossBattleShip *ship = NULL;

    for (size_t index = 0; index < vectorGetSize(protossFleet); index++) //iterating All avaliable Prottoss Ships
    {
        ship = vectorGet(protossFleet, index);

        if (getProtossShipType(ship) == PHOENIX)  //Checking Ship Type
        {
            regeneratePhoenixShield(ship);
        }
        else
        {
            regenerateCarierShield(ship);
        }

        ship = NULL;
    }
}

static void destroyTerranShip(BattleField *battleField, BattleShip **currTerranShip, size_t *terranSize, size_t *terranShipID) //Freeing The Killed ship from memory
{
    free(*currTerranShip);
    *currTerranShip = NULL;
    vectorPop(&battleField->terranFleet);
    *terranSize = vectorGetSize(&battleField->terranFleet);
    *currTerranShip = vectorBack(&battleField->terranFleet);
    *terranShipID = (*terranSize) - 1;
}

static bool checkTerranShip(BattleShip **currTerranShip, BattleField *battleField, size_t *terranSize, size_t *terranShipID, int protossId, char currProtossShipType)
{
    if (getTerranHealth(*currTerranShip) <= 0)
    {
        printKilledShip(currProtossShipType, protossId, *terranShipID); //Printing the Killed Ship
        destroyTerranShip(battleField, currTerranShip, terranSize, terranShipID); //Freeing The Killed ship from memory
        
        if (vectorIsEmpty(&battleField->terranFleet)) //cheking if the Terran ship is destroyed
        {
            return true; //Returns True if all of the Terran Army is destroyed
        }
    }

    return false;
}

bool ProtossAttack(BattleShip **currTerranShip, int protossId, size_t *terranShipID, BattleField *battleField, size_t *terranSize) //Checking The Protoss ship type and attacking the Terra
{
    ProtossBattleShip *currProtossShip = NULL;
    currProtossShip = vectorGet(&battleField->protossFleet, protossId);
    char currProtossShipType = getProtossShipType(currProtossShip);

    if (currProtossShipType == CARRIER) //Checking if it's an Carrier
    {
        int intersectors = (getProtossHealth(currProtossShip) < CARRIER_HEALTH) ? DAMAGED_STATUS_INTERCEPTORS : MAX_INTERCEPTORS; //Get's the number of interceptors the carrier can use by the Health indicator

        for (int index = 0; index < intersectors; index++) //Cycles as many interceptors as it has
        {
            carrierAtack(*currTerranShip); //If it is an carrier attack the current marked TerranShip

            if (checkTerranShip(currTerranShip, battleField, terranSize, terranShipID, protossId, currProtossShipType)) //cheking if the Terran ship is destroyed
            {
                return true; //Returns True if all of the Terran Army is destroyed
            }
        }
    }
    else //If it's not a Carrier it is an Phoenix
    {
        phoenixAttack(*currTerranShip); //Phoenix attacks the current marked TerranShip

        if (checkTerranShip(currTerranShip, battleField, terranSize, terranShipID, protossId, currProtossShipType)) //cheking if the Terran ship is destroyed
        {
            return true; //Returns True if all of the Terran Army is destroyed
        }
    }

    return false;
}
