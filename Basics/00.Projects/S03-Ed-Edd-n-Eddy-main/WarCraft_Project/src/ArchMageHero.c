#include "ArchMageHero.h"
#include "Defines.h"

#include <stdlib.h>

struct archMageHero
{
    Hero* hero;
    Spell* spells;
    BonusAction* bonusAction;
};

ArchMageHero* createArchMageHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate)
{
    ArchMageHero* newHero = malloc(sizeof(struct archMageHero));
    newHero->hero = createBasicHero(Username, UsermaxMana, UserbaseManaRegenRate);
    newHero->spells = setHeroSpells(ARCHMAGE_BASIC_SPELL_NAME, ARCHMAGE_BASIC_SPELL_MANA_COST,
                    ARCHMAGE_ULTIMATE_SPELL_NAME, ARCHMAGE_ULTIMATE_SPELL_MANA_COST);
    newHero->bonusAction = setBonusAction(CAST_ULTIMATE_SPELL, REGENERATE_MANA);
    
    return newHero;
}

Hero* getArchMageBasicHero(ArchMageHero* arch)
{
    return (arch->hero);
}

BonusAction* getArchMageBonusAction(ArchMageHero* arch)
{
    return (arch->bonusAction);
}

Spell* getArchMageSpells(ArchMageHero* arch)
{
    return (arch->spells);
}

void deinitArchMage(ArchMageHero* arch)
{
    free(arch->hero);
    free(arch->bonusAction);
    free(arch->spells);
    free(arch);
}
