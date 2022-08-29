#ifndef ACTIONS_H_
#define ACTIONS_H_

#include "Hero.h"
#include "Spell.h"
#include "BonusAction.h"

void executeAction(Hero* hero, Spell* spells, BonusAction* bonus, int currAction);

#endif /* ACTIONS_H_ */