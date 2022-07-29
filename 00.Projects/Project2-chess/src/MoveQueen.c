#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "BoardSetUp.h"
#include "FileHandler.h"
#include "Types.h"
#include "PawnsLoc.h"

void moveQueen(pawns *number, int bSize, int *queenLoc, int pawnsCount)
{
    char choice[3] = "0";
    int tiles = 0;
    int movementCount = 0;
    int checkForPawn = 0;
    int capacity = 10;
    char figure = 'q';
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
        printf("up-right diagonal X squares   - enter ur X\n");
        printf("up-left diagonal X squares    - enter ul X\n");
        printf("down-right diagonal X squares - enter dr X\n");
        printf("down-left diagonal X squares  - enter dl X\n");

        scanf("%s %d", choice, &tiles);

        if ((strcmp(choice, "r") == 0) && tiles > 0)
        {
            queenLoc[1] += tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[1] -= tiles;
                if ((checkForPawn = checkForPawn_RIGHT(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "right %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    queenLoc[1] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "right %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[1] -= tiles;
            }
        }
        else if ((strcmp(choice, "u") == 0) && tiles > 0)
        {
            queenLoc[0] -= tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[0] += tiles;
                if ((checkForPawn = checkForPawn_UP(tiles, queenLoc, number, pawnsCount)) > 0)
                {

                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "up %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    queenLoc[0] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "up %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] += tiles;
            }
        }
        else if ((strcmp(choice, "l") == 0) && tiles > 0)
        {
            queenLoc[1] -= tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[1] += tiles;
                if ((checkForPawn = checkForPawn_LEFT(tiles, queenLoc, number, pawnsCount)) > 0)
                {

                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "left %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    queenLoc[1] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "left %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[1] += tiles;
            }
        }
        else if ((strcmp(choice, "d") == 0) && tiles > 0)
        {
            queenLoc[0] += tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[0] -= tiles;
                if ((checkForPawn = checkForPawn_DOWN(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "down %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {

                    queenLoc[0] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "down %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] -= tiles;
            }
        }
        else if ((strcmp(choice, "ur") == 0) && tiles > 0)
        {
            queenLoc[0] -= tiles;
            queenLoc[1] += tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[0] += tiles;
                queenLoc[1] -= tiles;
                if ((checkForPawn = checkForPawn_UP_RIGHT(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Up-right diagonal  %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                    queenLoc[0] -= tiles;
                    queenLoc[1] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Up-right diagonal  %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] += tiles;
                queenLoc[1] -= tiles;
            }
        }
        else if ((strcmp(choice, "ul") == 0) && tiles > 0)
        {
            queenLoc[0] -= tiles;
            queenLoc[1] -= tiles;

            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[0] += tiles;
                queenLoc[1] += tiles;
                if ((checkForPawn = checkForPawn_UP_LEFT(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Up-Right diagonal  %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                    queenLoc[0] -= tiles;
                    queenLoc[1] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Up-Right diagonal  %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] += tiles;
                queenLoc[1] += tiles;
            }
        }
        else if ((strcmp(choice, "dr") == 0) && tiles > 0)
        {
            queenLoc[0] += tiles;
            queenLoc[1] += tiles;
            if (checkIfValid(queenLoc, bSize))
            {
                queenLoc[0] -= tiles;
                queenLoc[1] -= tiles;
                if ((checkForPawn = checkForPawn_DOWN_RIGHT(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Down-Right diagonal  %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                    queenLoc[0] += tiles;
                    queenLoc[1] += tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Down-Right diagonal  %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] -= tiles;
                queenLoc[1] -= tiles;
            }
        }
        else if ((strcmp(choice, "dl") == 0) && tiles > 0)
        {
            queenLoc[0] += tiles;
            queenLoc[1] -= tiles;
            if (checkIfValid(queenLoc, bSize))
            {

                queenLoc[0] -= tiles;
                queenLoc[1] += tiles;
                if ((checkForPawn = checkForPawn_DOWN_LEFT(tiles, queenLoc, number, pawnsCount)) > 0)
                {
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Down-Left diagonal  %d squares", checkForPawn);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
                else
                {
                    queenLoc[0] += tiles;
                    queenLoc[1] -= tiles;
                    moveMade[movementCount].move = malloc(sizeof(char) * 50);
                    sprintf(moveMade[movementCount].move, "Down-Left diagonal  %d squares", tiles);
                    moveMade[movementCount].turn = movementCount;
                    movementCount++;
                }
            }
            else
            {
                printf("Move not legal!\n");
                queenLoc[0] -= tiles;
                queenLoc[1] += tiles;
            }
        }
        else
        {
            printf("wrong comand\n");
        }

        for (int i = 0; i < pawnsCount; i++)
        {
            if (queenLoc[0] == number[i].x && queenLoc[1] == number[i].y)
            {

                number[i].isTaken = 1;
            }
        }

        boardSetUp(number, bSize, queenLoc, pawnsCount, figure);

        if (is_taken(number, pawnsCount))
        {

            break;
        }
    } while (1);

    fillFile(moveMade, movementCount);

    deInit(moveMade, movementCount);
}
