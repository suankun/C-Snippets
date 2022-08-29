#ifndef ARCH_MAGE_HERO_H_
#define ARCH_MAGE_HERO_H_

#include "Hero.h"
#include "Spell.h"
#include "BonusAction.h"

typedef struct archMageHero ArchMageHero;

ArchMageHero* createArchMageHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate);

Hero* getArchMageBasicHero(ArchMageHero* arch);
BonusAction* getArchMageBonusAction(ArchMageHero* arch);
Spell* getArchMageSpells(ArchMageHero* arch);
void deinitArchMage(ArchMageHero* arch);

#endif /* ARCH_MAGE_HERO_H_ */