#ifndef MESSAGES_H_
#define MESSAGES_H_

void printWinnerId(int playerId);
void printShooterTurn(int playerId);
void printTargetVitalData(int health, int armor);
void printReloading(void);
void printPistolData(int clipBullets, int remainingAmmo);
void printNoAmmoLeft(void);
void printIncorrectPlayerData(void);
void printIcorrectPistolData(void);
void printPlayersRunOutOfAmmos(void);

#endif /* MESSAGES_H_ */