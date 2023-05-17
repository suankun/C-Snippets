#ifndef DEATH_KNIGHT_HERO_H_
#define DEATH_KNIGHT_HERO_H_

#include "BonusAction.h"
#include "Hero.h"
#include "Spell.h"

typedef struct deathKnightHero DeathKnightHero;

DeathKnightHero* createDeathKnightHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate);

Hero* getDeathKnightBasicHero(DeathKnightHero* knight);
BonusAction* getDeathKnightBonusAction(DeathKnightHero* knight);
Spell* getDeathKnightSpells(DeathKnightHero* knight);
void deinitDeathKnight(DeathKnightHero* knight);

#endif /* DEATH_KNIGHT_HERO_H_ */