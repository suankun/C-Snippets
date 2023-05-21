#include "DrawRangerHero.h"
#include "Defines.h"

#include <stdlib.h>

struct drawRangerHero
{
    Hero* hero;
    Spell* spells;
    BonusAction* bonusAction;
};

DrawRangerHero* createDrawRangerHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate)
{
    DrawRangerHero* newHero = malloc(sizeof(struct drawRangerHero));
    newHero->hero = createBasicHero(Username, UsermaxMana, UserbaseManaRegenRate);
    newHero->spells = setHeroSpells(DRAW_RANGER_BASIC_SPELL_NAME, DRAW_RANGER_BASIC_SPELL_MANA_COST,
                    DRAW_RANGER_ULTIMATE_SPELL_NAME, DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);
    newHero->bonusAction = setBonusAction(CAST_BASIC_SPELL, CAST_BASIC_SPELL);

    return newHero;
}

Hero* getDrawRangerBasicHero(DrawRangerHero* ranger)
{
    return (ranger->hero);
}

BonusAction* getDrawRangerBonusAction(DrawRangerHero* ranger)
{
    return (ranger->bonusAction);
}

Spell* getDrawRangerSpells(DrawRangerHero* ranger)
{
    return (ranger->spells);
}

void deinitDrawRanger(DrawRangerHero* ranger)
{
    free(ranger->bonusAction);
    free(ranger->hero);
    free(ranger->spells);
    free(ranger);
}