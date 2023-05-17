#include "Spell.h"
#include "Defines.h"

#include <stdlib.h>
#include <string.h>

typedef struct 
{
  char name[MAX_SPELL_NAME_SIZE + 1];
  int manaCost;
} currentSpell;

struct spell
{
  currentSpell heroSpell[MAX_SPELLS];
};

Spell *setHeroSpells(char* basicSpell, int basicCost,
                    char* ultimateSpell, int ultimateCost)
{
    Spell *spells = malloc(sizeof(Spell));
    strcpy(spells->heroSpell[BASIC].name, basicSpell);
    spells->heroSpell[BASIC].manaCost = basicCost;
    strcpy(spells->heroSpell[ULTIMATE].name, ultimateSpell);
    spells->heroSpell[ULTIMATE].manaCost = ultimateCost;
    return spells;
}

char* getHeroSpellName(Spell *spells, int currSpell)
{
    return (spells->heroSpell[currSpell].name);
}

int getHeroSpellCost(Spell *spells, int currSpell)
{
    return (spells->heroSpell[currSpell].manaCost);
}