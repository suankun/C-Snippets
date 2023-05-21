#include "Validations.h"
#include "Defines.h"

bool validatePlayerData(int playerHealth, int playerArmor)
{
    if (playerHealth <= 0 || playerArmor < 0)
    {
        return false;
    }
    
    return true;
}

bool validatePistolData(int pistolId, int pistolDamagePerRound, int pistolClipSize)
{
  if (pistolId != GLOCK && pistolId != DESERT_EAGLE)
  {
    return false;
  }

  if (pistolDamagePerRound <= 0 || pistolClipSize <= 0)
  {
    return false;
  }
  
  return true;
}

bool isDead(int playerHealth)
{
    if (playerHealth <= 0)
    {
        return true;
    }
    
    return false;
}