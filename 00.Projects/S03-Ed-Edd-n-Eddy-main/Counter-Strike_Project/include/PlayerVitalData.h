#ifndef PLAYER_VITAL_DATA_H_
#define PLAYER_VITAL_DATA_H_

typedef struct playerVitalData{
  int health;
  int armor;
  void (*takeShot)(struct playerVitalData* player, int damage, int armorDamage, int healthDamage);
} PlayerVitalData;

void setPlayerVitalData(PlayerVitalData* player, int playerHealth, int playerArmor);

#endif /* PLAYER_VITAL_DATA_H_ */