#include "DeathKnightHero.h"
#include "Defines.h"

#include <stdlib.h>

struct deathKnightHero
{
    Hero* hero;
    Spell* spells;
    BonusAction* bonusAction;
};

DeathKnightHero* createDeathKnightHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate)
{
    DeathKnightHero* newHero = malloc(sizeof(struct deathKnightHero));
    newHero->hero = createBasicHero(Username, UsermaxMana, UserbaseManaRegenRate);
    newHero->spells = setHeroSpells(DEATH_KNIGHT_BASIC_SPELL_NAME, DEATH_KNIGHT_BASIC_SPELL_MANA_COST,
                    DEATH_KNIGHT_ULTIMATE_SPELL_NAME, DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);
    newHero->bonusAction =setBonusAction(CAST_ULTIMATE_SPELL, CAST_BASIC_SPELL);

    return newHero;
}

Hero* getDeathKnightBasicHero(DeathKnightHero* knight)
{
    return (knight->hero);
}

BonusAction* getDeathKnightBonusAction(DeathKnightHero* knight)
{
    return (knight->bonusAction);
}

Spell* getDeathKnightSpells(DeathKnightHero* knight)
{
    return (knight->spells);
}

void deinitDeathKnight(DeathKnightHero* knight)
{
    free(knight->hero);
    free(knight->bonusAction);
    free(knight->spells);
    free(knight);
}