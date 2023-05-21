#ifndef VALIDATIONS_H_
#define VALIDATIONS_H_

#include <stdbool.h>

bool validatePlayerData(int playerHealth, int playerArmor);
bool validatePistolData(int pistolId, int pistolDamagePerRound, int pistolClipSize);
bool isDead(int playerHealth);

#endif /* VALIDATIONS_H_ */