#include "Messages.h"

#include <stdio.h>

void printSpellCast(char* heroName, char* spellName, int cost)
{
    printf("%s casted %s for %d mana\n", heroName, spellName, cost);
}

void printUnsuccessfulSpellCast(char* heroName, char* spellName)
{
    printf("%s - not enough mana to cast %s\n", heroName, spellName);
}

void printBonusSpellCast(char* heroName, char* spellName)
{
    printf("%s casted %s for 0 mana\n", heroName, spellName);
}