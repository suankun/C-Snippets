#ifndef BONUS_ACTION_H_
#define BONUS_ACTION_H_

typedef struct bonusAction BonusAction;

BonusAction* setBonusAction(int bonusRequirement, int bonusAction);

int getBonusRequirement(BonusAction* bonus);
int getBonusType(BonusAction* bonus);

#endif /* BONUS_ACTION_H_ */