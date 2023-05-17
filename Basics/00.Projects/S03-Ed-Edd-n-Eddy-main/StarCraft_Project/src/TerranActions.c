#include "TerranActions.h"
#include "Defines.h"
#include "Ships.h"
#include "PrintInfo.h"


static void vikingAttack(ProtossBattleShip *currProtossShip)
{
    if (getProtossShipType(currProtossShip) == PHOENIX) // If it's an Phoenix
    {
        decreaseShield(&currProtossShip, VIKING_DAMAGE_TO_PHOENIX); // Deals Double Damage
    }
    else
    {
        decreaseShield(&currProtossShip, VIKING_DAMAGE); // else deals normal
    }

    if (getShield(currProtossShip) < 0) // Check for Over damage
    {
        overShieldDamage(&currProtossShip, getShield(currProtossShip));
        setShield(&currProtossShip, 0);
    }
}

static void battleCruserAttack(ProtossBattleShip *currProtossShip, int roundCounter)
{
    if (roundCounter % YAMATO_CANNON_LOADING_TURNS == 0)
    {
        decreaseShield(&currProtossShip, BATTLE_YAMATO_CANNON_DAMAGE); // every fifth attack is 5 times more powerfull;
    }
    else
    {
        decreaseShield(&currProtossShip, BATTLE_BRUSER_DAMAGE); // Deals Normal Damage if it's not the fifth Turn for this Cruiser
    }

    if (getShield(currProtossShip) < 0) // Checking if there is OverDamage on Shield
    {
        overShieldDamage(&currProtossShip, getShield(currProtossShip)); // Dealing damage to Health
        setShield(&currProtossShip, 0);                                 // Setting Shield to 0 after the damage;
    }
}

static void destroyProtossShip(BattleField *battleField, ProtossBattleShip **currProtossShip, size_t *protossSize, size_t *protosShipID) // Freeing The KIlled Protos Ship
{
    free(*currProtossShip);
    *currProtossShip = NULL;
    vectorPop(&battleField->protossFleet);
    *protossSize = vectorGetSize(&battleField->protossFleet);
    *currProtossShip = vectorBack(&battleField->protossFleet);
    *protosShipID = (*protossSize) - 1;
}

bool TerranAttack(ProtossBattleShip **currProtossShip, int roundCounter, size_t terranID, BattleField *battleField, size_t *protosShipID, size_t *protossSize) // Checking The Terran ship Type and attacking
{  
    BattleShip *currTerranShip = NULL;
    currTerranShip = vectorGet(&battleField->terranFleet, terranID);
    char terranShipType = getTerranShiptype(currTerranShip);
    
    if (terranShipType == VIKING)
    {   
        vikingAttack(*currProtossShip);
    }
    else
    {
        battleCruserAttack(*currProtossShip, roundCounter);
    }

    if (getProtossHealth(*currProtossShip) <= 0)
    {
        printKilledShip(terranShipType, terranID, *protosShipID);
        destroyProtossShip(battleField, currProtossShip, protossSize, protosShipID);

        if (vectorIsEmpty(&battleField->protossFleet))
        {
            return true;
        }
    }

    return false;
}


