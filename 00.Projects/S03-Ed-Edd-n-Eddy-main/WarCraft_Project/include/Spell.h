#ifndef SPELL_H_
#define SPELL_H_

#define MAX_SPELL_NAME_SIZE 20
#define MAX_SPELLS 2

typedef struct spell Spell;

Spell* setHeroSpells( char* basicSpell, int basicCost,
                    char* ultimateSpell, int ultimateCost);

char* getHeroSpellName(Spell *spells, int currSpell);
int getHeroSpellCost(Spell *spells, int currSpell);

#endif /* SPELL_H_ */