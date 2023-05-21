#ifndef ARENA_H_
#define ARENA_H_

#include "DrawRangerHero.h"
#include "DeathKnightHero.h"
#include "ArchMageHero.h"

typedef struct
{
    ArchMageHero* Arch_Mage;
    DeathKnightHero* Death_Knight;
    DrawRangerHero* Draw_Ranger;
} Arena;

void createHeroes(Arena *arena);
void StartGame(Arena *arena);
void deinitArena(Arena *arena);

#endif /* ARENA_H_ */