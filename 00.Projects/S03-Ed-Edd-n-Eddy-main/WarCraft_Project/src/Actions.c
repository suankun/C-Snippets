#include "Actions.h"
#include "Defines.h"
#include "Messages.h"

#include <stdbool.h>

static void castSpell(Hero *hero, char* spellName, int manaCost)
{
    printSpellCast(getHeroName(hero), spellName, manaCost);
    decreaseHeroMana(hero, manaCost);
}

static void regenerateMana(Hero *hero)
{
    int heroCurrMana = getHeroCurrMana(hero);
    int heroMaxMana = getHeroMaxMana(hero);
    int regenerateRate = getHeroManaRegRate(hero);

    if (heroCurrMana + regenerateRate > heroMaxMana)
    {
        increaseHeroMana(hero, (heroMaxMana - heroCurrMana));
    }
    else
    {
        increaseHeroMana(hero, regenerateRate);
    }
}

static void heroBonusAction(Hero *hero, BonusAction* bonus, Spell* spells, int currAction)
{
    int bonusAction = getBonusType(bonus);

    if (getBonusRequirement(bonus) == currAction)
    {
        if (bonusAction == REGENERATE_MANA)
        {
            regenerateMana(hero);  
        }
        else 
        {
            printBonusSpellCast(getHeroName(hero), getHeroSpellName(spells, bonusAction));
        }
    }
}

static bool tryCastSpell(Hero *hero, Spell* spells, int currAction)
{
    int spellCost = getHeroSpellCost(spells, currAction);
    char* spellName = getHeroSpellName(spells, currAction);
    int heroCurrMana = getHeroCurrMana(hero);

    if (heroCurrMana >= spellCost)
    {
        castSpell(hero, spellName, spellCost);
        return true;
    }

    return false;
}

void executeAction(Hero* hero, Spell* spells, BonusAction* bonus, int currAction)
{

    if (currAction == REGENERATE_MANA)
    {
        regenerateMana(hero);
    }
    else
    {
        if (tryCastSpell(hero, spells, currAction))
        {
            heroBonusAction(hero, bonus, spells, currAction);
        }
        else
        {
            printUnsuccessfulSpellCast(getHeroName(hero), getHeroSpellName(spells, currAction));
        }
    }
}
