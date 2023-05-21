#include "Action.h"
#include "Pistol.h"
#include "Player.h"
#include "Messages.h"

static void reloadPistol(Pistol* pistol)
{
  if (pistol->reload(pistol))
  {
    printReloading();
    printPistolData(pistol->currClipBullets, pistol->remainingAmmo);
  }
  else
  {
    printNoAmmoLeft();
  }
}

static void startShoot(Pistol* pistol, PlayerVitalData* target)
{
  int rounds = pistol->roundsPerFire;

  while (rounds > 0 && target->health > 0)
  {
    if (pistol->shoot(pistol))
    {
      target->takeShot(target, pistol->damagePerRound, pistol->armorRate, pistol->healthRate);
      printTargetVitalData(target->health, target->armor);
      rounds--;
    }
    else
    {
      reloadPistol(pistol);
      rounds = 0;
    }
  }
}

void turnToShoot(Player* shooter, PlayerVitalData* target)
{
  printShooterTurn(shooter->playerId);

  Pistol* pistol = &(shooter->pistol);

  if (pistol->hasAmmoLeft)
  {
    startShoot(pistol, target);
  }
  else
  {
    printNoAmmoLeft();
  }
}