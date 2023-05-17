#ifndef PISTOL_H_
#define PISTOL_H_

#include <stdbool.h>

typedef struct pistol{
  int damagePerRound;
  int clipSize;
  int currClipBullets;
  int remainingAmmo;
  int roundsPerFire;
  int armorRate;
  int healthRate;
  bool hasAmmoLeft;
  bool (*shoot)(struct pistol* playerPistol);
  bool (*reload)(struct pistol* playerPistol);
} Pistol;

void setPlayerPistol(Pistol *pistol, int pistolId, 
                int pistolDamagePerRound, int pistolClipSize, int pistolRemainingAmmo);

#endif /* PISTOL_H_ */