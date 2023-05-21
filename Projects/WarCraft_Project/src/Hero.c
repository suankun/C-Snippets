#include "Hero.h"
#include "Defines.h"

#include <string.h>
#include <stdlib.h>

struct hero
{
  char name[MAX_HERO_NAME_SIZE + 1];
  int maxMana;
  int currMana;
  int manaRegenRate;
};

Hero* createBasicHero(char *Username, int UserMaxMana, int UserbaseManaRegenRate)
{
  Hero* newHero = malloc(sizeof(struct hero));
  strcpy(newHero->name, Username);
  newHero->maxMana = UserMaxMana;
  newHero->currMana = UserMaxMana;
  newHero->manaRegenRate = UserbaseManaRegenRate;

  return newHero;
}

char* getHeroName(Hero *hero)
{
  return hero->name;
}

int getHeroCurrMana(Hero *hero)
{
  return hero->currMana;
}

int getHeroMaxMana(Hero *hero)
{
  return hero->maxMana;
}

int getHeroManaRegRate(Hero *hero)
{
  return hero->manaRegenRate;
}

void decreaseHeroMana(Hero *hero, int value)
{
  (hero->currMana) -= value;
}

void increaseHeroMana(Hero *hero, int value)
{
  (hero->currMana) += value;
}