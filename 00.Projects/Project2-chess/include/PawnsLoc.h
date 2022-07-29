#ifndef CODE_ACADEMY_PawnsLoc_H
#define CODE_ACADEMY_PawnsLoc_H

#include "Types.h"

bool is_taken(pawns *number, int size);

pawns *enterPawnsLoc(int size);
pawns *ReadPawnsLoc(int pawnsCount, int *location, int size);
pawns *RandPawnsLoc(int Bsize , int pawnsCount);

//Rook and queen check for pawns
int checkForPawn_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_UP(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_DOWN(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);

//QUEEN Diagonal moves
int checkForPawn_UP_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_UP_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_DOWN_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);
int checkForPawn_DOWN_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount);

#endif // CODE_ACADEMY_PawnsLoc_H