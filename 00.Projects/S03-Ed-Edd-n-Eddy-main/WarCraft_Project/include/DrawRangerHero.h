#ifndef DRAWN_RANGER_HERO_H_
#define DRAWN_RANGER_HERO_H_

#include "BonusAction.h"
#include "Hero.h"
#include "Spell.h"

typedef struct drawRangerHero DrawRangerHero;

DrawRangerHero* createDrawRangerHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate);

Hero* getDrawRangerBasicHero(DrawRangerHero* ranger);
BonusAction* getDrawRangerBonusAction(DrawRangerHero* ranger);
Spell* getDrawRangerSpells(DrawRangerHero* ranger);
void deinitDrawRanger(DrawRangerHero* ranger);

#endif /* DRAWN_RANGER_HERO_H_ */