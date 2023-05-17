#include <stdio.h>
#include "BoardSetUp.h"
#include "Types.h"
#include <stdlib.h>

void boardSetUp(pawns *number, int bSize, int *kLoc, int pawnsCount, char figure)
{
    // print board
    for (int i = 0; i < bSize; i++)
    {
        for (int j = 0; j < bSize; j++)
        {

            // print pawns
            for (int index = 0; index < pawnsCount; index++)
            {

                if ((number[index].isTaken == false) && (number[index].x == i) && (number[index].y == j))
                {   
                    //print Figure PRIORITIZED > Panws and set them as taken! 
                    if ((i == kLoc[0]) && (j == kLoc[1]))
                    {   
                        number[index].isTaken = true;
                        printf("%c ", figure);
                        j++;
                        break;
                    }
                    else
                    {
                        printf("p ");
                        j++;
                    }
                }
            }
            // print Figure
            if ((i == kLoc[0]) && (j == kLoc[1]))
            {

                printf("%c ", figure);
                continue;
            }

            if (j == bSize)
            {
                continue;
            }
            printf("_ ");
        }
        printf("\n");
    }
}

void deInit(moves *moveMade, int movementCount )
{
    for (int i = 0; i < movementCount; i++)
    {
        free(moveMade[i].move);
    }
    free(moveMade);
}