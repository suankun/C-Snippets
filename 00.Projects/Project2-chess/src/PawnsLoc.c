#include <stdio.h>
#include <stdlib.h>

#include "PawnsLoc.h"

bool checkIfValid(int *kLoc, int bSize)
{
    if ((kLoc[0] >= 0 && kLoc[1] >= 0) && (kLoc[0] < bSize && kLoc[1] < bSize))
    {
        return true;
    }

    return false;
}

pawns *RandPawnsLoc(int Bsize, int pawnsCount)
{

    pawns *pawnsLoc = malloc(sizeof(pawns) * pawnsCount);
    for (int i = 0; i < pawnsCount; i++)
    {
        pawnsLoc[i].x = rand() % Bsize;
        pawnsLoc[i].y = rand() % Bsize;
        pawnsLoc[i].isTaken = false;
    }

    return pawnsLoc;
}

pawns *enterPawnsLoc(int size)
{
    pawns *pawnsLoc = malloc(sizeof(pawns) * size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter x");
        scanf("%d", &pawnsLoc[i].x);
        printf("Enter y");
        scanf("%d", &pawnsLoc[i].y);
        pawnsLoc[i].isTaken = false;
    }

    return pawnsLoc;
}

pawns *ReadPawnsLoc(int pawnsCount, int *location, int size)
{
    int ind = 0;
    pawns *pawnsLoc = malloc(sizeof(pawns) * pawnsCount);
    for (int i = 5; i < size; i += 2)
    {
        pawnsLoc[ind].x = location[i];
        pawnsLoc[ind].y = location[i + 1];
        pawnsLoc[ind].isTaken = false;
        ind++;
    }
    return pawnsLoc;
}

bool is_taken(pawns *number, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (number[i].isTaken == 1)
        {
            count++;
        }
    }

    if (count == size)
    {
        return true;
    }

    return false;
}

int checkForPawn_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[1] + 1; j <= (FigureLoc[1] + MoveTile); j++)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {
            if (j == number[i].y && FigureLoc[0] == number[i].x && number[i].isTaken == false)
            {
                FigureLoc[1] = j;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[1] - 1; j >= (FigureLoc[1] - MoveTile); j--)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].y && FigureLoc[0] == number[i].x && number[i].isTaken == false)
            {
                FigureLoc[1] = j;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_DOWN(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] + 1; j <= (FigureLoc[0] + MoveTile); j++)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {
            if (j == number[i].x && FigureLoc[1] == number[i].y && number[i].isTaken == false)
            {

                FigureLoc[0] = j;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_UP(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] - 1; j >= (FigureLoc[0] - MoveTile); j--)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].x && FigureLoc[1] == number[i].y && number[i].isTaken == false)
            {

                FigureLoc[0] = j;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_UP_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] - 1, r = FigureLoc[1] + 1; j >= (FigureLoc[0] - MoveTile) || r <= (FigureLoc[1] + MoveTile); r++, j--)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].x && r == number[i].y && number[i].isTaken == false)
            {

                FigureLoc[0] = j;
                FigureLoc[1] = r;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_UP_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] - 1, r = FigureLoc[1] - 1; j >= (FigureLoc[0] - MoveTile) || r >= (FigureLoc[1] - MoveTile); r--, j--)
    {
                    /* 3 2            2         4 3  2 */
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].x && r == number[i].y && number[i].isTaken == false)
            {   
                printf("IUP_LEFT!\n");

                FigureLoc[0] = j;
                FigureLoc[1] = r;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_DOWN_RIGHT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] + 1, r = FigureLoc[1] + 1; j <= (FigureLoc[0] + MoveTile) || r <= (FigureLoc[1] + MoveTile); r++, j++)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].x && r == number[i].y && number[i].isTaken == false)
            {

                FigureLoc[0] = j;
                FigureLoc[1] = r;
                return count;
            }
        }
    }
    count = 0;

    return count;
}

int checkForPawn_DOWN_LEFT(int MoveTile, int *FigureLoc, pawns *number, int pawnsCount)
{
    int count = 0;

    for (int j = FigureLoc[0] + 1, r = FigureLoc[1] - 1; j <= (FigureLoc[0] + MoveTile) || r >= (FigureLoc[1] - MoveTile); r--, j++)
    {
        count++;
        for (int i = 0; i < pawnsCount; i++)
        {

            if (j == number[i].x && r == number[i].y && number[i].isTaken == false)
            {

                FigureLoc[0] = j;
                FigureLoc[1] = r;
                return count;
            }
        }
    }
    count = 0;

    return count;
}