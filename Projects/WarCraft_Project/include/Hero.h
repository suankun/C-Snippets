#ifndef HERO_H_
#define HERO_H_

#define MAX_SPELL_NAME_SIZE 20
#define MAX_HERO_NAME_SIZE 20
#define MAX_SPELLS 2
#define MAX_HERO_COUNT 3

typedef struct hero Hero;

Hero* createBasicHero(char *Username, int UsermaxMana, int UserbaseManaRegenRate);

char* getHeroName(Hero *hero);
int getHeroCurrMana(Hero *hero);
int getHeroMaxMana(Hero *hero);
int getHeroManaRegRate(Hero *hero);

void decreaseHeroMana(Hero *hero, int value);
void increaseHeroMana(Hero *hero, int value);

#endif /* HERO_H_ */
