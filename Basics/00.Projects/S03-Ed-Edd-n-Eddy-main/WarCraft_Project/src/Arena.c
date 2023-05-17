#include "Arena.h"
#include "Actions.h"

#include <stdio.h>
#include <stdlib.h>


void createHeroes(Arena *arena)
{
    char name[MAX_HERO_NAME_SIZE + 1];
    int maxMana = 0;
    int baseManaRegenRate = 0;
    int manaRegenModifier = 0;

    // read Archmage data
    scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
    arena->Arch_Mage = createArchMageHero(name, maxMana, (baseManaRegenRate * manaRegenModifier));

    // read Death Knight data
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    arena->Death_Knight = createDeathKnightHero(name, maxMana, baseManaRegenRate);

    // read Draw Ranger data
    scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
    arena->Draw_Ranger = createDrawRangerHero(name, maxMana, baseManaRegenRate);
}

static void archMageTurn(ArchMageHero *archMage, int currAction)
{
    Hero* hero = getArchMageBasicHero(archMage);
    BonusAction* bonusAction = getArchMageBonusAction(archMage);
    Spell* spells = getArchMageSpells(archMage);

    executeAction(hero, spells, bonusAction, currAction);
}

static void deathKnightTurn(DeathKnightHero* deathKnight, int currAction)
{
    Hero* hero = getDeathKnightBasicHero(deathKnight);
    BonusAction* bonusAction = getDeathKnightBonusAction(deathKnight);
    Spell* spells = getDeathKnightSpells(deathKnight);

    executeAction(hero, spells, bonusAction, currAction);
}

static void drawRangerTurn(DrawRangerHero* drawRanger, int currAction)
{
    Hero* hero = getDrawRangerBasicHero(drawRanger);
    BonusAction* bonusAction = getDrawRangerBonusAction(drawRanger);
    Spell* spells = getDrawRangerSpells(drawRanger);

    executeAction(hero, spells, bonusAction, currAction);
}

void StartGame(Arena *arena)
{
    int commandsCount = 0;
    int currAction = 0;
    scanf("%d", &commandsCount);

    for (int i = 0; i < commandsCount; ++i)
    {
        scanf("%d", &currAction);

        if (currAction >= 0 && currAction <= 2)
        {   
            ArchMageHero* archMage = arena->Arch_Mage;
            archMageTurn(archMage, currAction);      

            DeathKnightHero* deathKnight = arena->Death_Knight;
            deathKnightTurn(deathKnight, currAction);

            DrawRangerHero* drawRanger = arena->Draw_Ranger;
            drawRangerTurn(drawRanger, currAction);
        }
    }
}

void deinitArena(Arena *arena)
{
    deinitArchMage(arena->Arch_Mage);
    deinitDeathKnight(arena->Death_Knight);
    deinitDrawRanger(arena->Draw_Ranger);
}