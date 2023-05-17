#ifndef CODE_ACADEMY_Types_H
#define CODE_ACADEMY_Types_H

#include <stdbool.h>

typedef struct moves
{
    char *move;
    int turn;
} moves;

typedef struct pawns
{
    int x;
    int y;
    bool isTaken;
} pawns;


bool checkIfValid(int *kLoc, int bSize);
void deInit(moves *moveMade, int movementCount);

#endif // CODE_ACADEMY_Types_H
