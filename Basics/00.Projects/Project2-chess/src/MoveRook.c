#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "MoveRook.h"
#include "BoardSetUp.h"
#include "FileHandler.h"
#include "Types.h"
#include "PawnsLoc.h"

void moveRook(pawns *number, int bSize, int *rookLoc, int pawnsCount)
{
    char choice[3] = "0";
    int tiles = 0;
    int movementCount = 0;
    int checkForPawn = 0;
    int capacity = 10;
    char figure = 'r';
    moves *moveMade = (moves *)malloc(sizeof(moves) * capacity);
    do
    {

        if (movementCount == capacity - 1)
        {
            capacity *= 2;
            moveMade = (moves *)realloc(moveMade, sizeof(moves) * capacity);
        }

        printf("Please enter your move:\n");
        printf("X is number of tiles to move(r X > r 5)\n");
        printf("right X squares               - enter r x\n");
        printf("up X squares                  - enter u X\n");
        printf("left X squares                - enter l X\n");
        printf("down X squares                - enter d X\n");

        scanf("%s %d", choice, &tiles);

        if ((strcmp(choice, "r") == 0) && tiles > 0)
        {
            rookLoc[1] += tiles;
            if (checkIfValid(rookLoc, bSize))
            {
                rookLoc[1] -= tiles;
                if ((checkForPawn = checkForPawn_RIGHT(tiles, rookLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "right %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    rookLoc[1] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "right %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                rookLoc[1] -= tiles;
            }
        }
        else if ((strcmp(choice, "u") == 0) && tiles > 0)
        {
            rookLoc[0] -= tiles;
            if (checkIfValid(rookLoc, bSize))
            {
                rookLoc[0] += tiles;
                if ((checkForPawn = checkForPawn_UP(tiles, rookLoc, number, pawnsCount)) > 0)
                {   
                    
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "up %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                    
                    rookLoc[0] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "up %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                rookLoc[0] += tiles;
            }
        }
        else if ((strcmp(choice, "l") == 0) && tiles > 0)
        {
            rookLoc[1] -= tiles;
            if (checkIfValid(rookLoc, bSize))
            {
                rookLoc[1] += tiles;
                if ((checkForPawn = checkForPawn_LEFT(tiles, rookLoc, number, pawnsCount)) > 0)
                {   
                    
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "left %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                
                    rookLoc[1] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "left %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                rookLoc[1] += tiles;
            }
        }
        else if ((strcmp(choice, "d") == 0) && tiles > 0)
        {
            rookLoc[0] += tiles;
            if (checkIfValid(rookLoc, bSize))
            {
                rookLoc[0] -= tiles;
                if ((checkForPawn = checkForPawn_DOWN(tiles, rookLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "down %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    rookLoc[0] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "down %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                rookLoc[0] -= tiles;
            }
        }
        else
        {
            printf("wrong comand\n");
        }

        for (int i = 0; i < pawnsCount; i++)
        {
            if (rookLoc[0] == number[i].x && rookLoc[1] == number[i].y)
            {

                number[i].isTaken = 1;
            }
        }

        boardSetUp(number, bSize, rookLoc, pawnsCount, figure);

        if (is_taken(number, pawnsCount))
        {

            break;
        }
    } while (1);

    fillFile(moveMade, movementCount);

    deInit(moveMade, movementCount);
}

