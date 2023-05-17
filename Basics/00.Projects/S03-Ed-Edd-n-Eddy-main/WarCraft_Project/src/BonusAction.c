#include "BonusAction.h"

#include <stdlib.h>

struct bonusAction
{
  int bonusRequirement;
  int bonusAction;
};

BonusAction* setBonusAction(int bonusRequirement, int bonusAction)
{
    BonusAction* newBonusAction = malloc(sizeof(struct bonusAction));
    newBonusAction->bonusRequirement = bonusRequirement;
    newBonusAction->bonusAction = bonusAction;

    return newBonusAction;
}

int getBonusRequirement(BonusAction* bonus)
{
    return (bonus->bonusRequirement);
}

int getBonusType(BonusAction* bonus)
{
    return (bonus->bonusAction);
}