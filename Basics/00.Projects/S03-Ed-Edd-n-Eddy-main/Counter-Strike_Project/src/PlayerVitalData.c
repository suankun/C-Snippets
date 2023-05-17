#include "PlayerVitalData.h"

static void takeShotWithArmor(PlayerVitalData* player, int armorDamage, int healthDamage)
{
    player->armor -= armorDamage;

    if (player->armor < 0)
    {
        player->health += player->armor;
        player->armor = 0;
    }
    
    player->health -= healthDamage;
}

static void playerTakeShot(PlayerVitalData* player, int damage, int armorDamage, int healthDamage)
{
    if (player->armor > 0)
    {
        takeShotWithArmor(player, armorDamage, healthDamage);
    }
    else
    {
        player->health -= damage;
    }
}

void setPlayerVitalData(PlayerVitalData* player, int playerHealth, int playerArmor)
{
    player->armor = playerArmor;
    player->health = playerHealth;
    player->takeShot = playerTakeShot;
}