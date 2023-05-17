#include "Pistol.h"
#include "Defines.h"

static void setGlockSpecifics(Pistol* pistol, int damage)
{
    pistol->armorRate = GLOCK_ARMOR_RATE * damage;
    pistol->healthRate = GLOCK_HEALTH_RATE * damage;
    pistol->roundsPerFire = GLOCK_ROUNDS_PER_FIRE;
}

static void setDeserEagleSpecifics(Pistol* pistol, int damage)
{
    pistol->armorRate = DESERT_EAGLE_ARMOR_RATE * damage;
    pistol->healthRate = DESERT_EAGLE_HEALTH_RATE * damage;
    pistol->roundsPerFire = DESERT_EAGLE_ROUNDS_PER_FIRE;
}

static bool pistolShot(Pistol* pistol)
{
    if (pistol->currClipBullets > 0)
    {
        pistol->currClipBullets--;
        return true;
    }
    
    return false;
}

static bool reloadPistol(Pistol* pistol)
{
    if (pistol->remainingAmmo > pistol->clipSize)
    {
        pistol->currClipBullets = pistol->clipSize;
        pistol->remainingAmmo -= pistol->clipSize;
        return true;
    }
    else if (pistol->remainingAmmo > 0 && pistol->remainingAmmo <= pistol->clipSize)
    {
        pistol->currClipBullets = pistol->remainingAmmo;
        pistol->remainingAmmo = 0;
        return true;
    }

    pistol->hasAmmoLeft = false;
    return false;
}

void (*setSpecifications[])(Pistol* pistol, int damage) = {setGlockSpecifics, setDeserEagleSpecifics};

void setPlayerPistol(Pistol* pistol, int pistolId, 
                int pistolDamagePerRound, int pistolClipSize, int pistolRemainingAmmo)
{
    pistol->clipSize = pistolClipSize;
    pistol->currClipBullets = pistolClipSize;
    pistol->damagePerRound = pistolDamagePerRound;
    pistol->remainingAmmo = pistolRemainingAmmo;
    pistol->hasAmmoLeft = true;
    setSpecifications[pistolId](pistol, pistolDamagePerRound);
    pistol->shoot = pistolShot;
    pistol->reload = reloadPistol;
}

