#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "BoardSetUp.h"
#include "FileHandler.h"
#include "Types.h"


void moveKnight(pawns *number, int bSize, int *kLoc,int pawnsCount)
{
    char choice[3] = "0";
    int movementCount = 0;
    int capacity = 10;
    char figure = 'k';
    moves *moveMade = (moves *)malloc(sizeof(moves) * capacity);
    do
    {

        if (movementCount == capacity - 1)
        {
            /* code */
            capacity *= 2;
            moveMade = (moves *)realloc(moveMade, sizeof(moves) * capacity);
        }
        
        printf("Please enter your move:\n");
        printf("up left    - enter ul\n");
        printf("up right   - enter ur\n");
        printf("right up   - enter ru\n");
        printf("right down - enter rd\n");
        printf("down left  - enter dl\n");
        printf("down right - enter dr\n");
        printf("left up    - enter lu\n");
        printf("left down  - enter ld\n");

        scanf("%s", choice);
        // choice[3] = '\0';

        if (strcmp(choice, "ul") == 0)
        {
            kLoc[0] -= 2;
            kLoc[1] -= 1;
            if (checkIfValid(kLoc, bSize))
            {
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("up left")+1));                
                strcpy(moveMade[movementCount].move, "up left");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] += 2;
                kLoc[1] += 1;
            }
        }
        else if (strcmp(choice, "ur") == 0)
        {
            kLoc[0] -= 2;
            kLoc[1] += 1;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("up right")+1));
                strcpy(moveMade[movementCount].move, "up right");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] += 2;
                kLoc[1] -= 1;
            }
        }
        else if (strcmp(choice, "ru") == 0)
        {

            kLoc[0] -= 1;
            kLoc[1] += 2;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("right up")+1));
                strcpy(moveMade[movementCount].move, "right up");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] += 1;
                kLoc[1] -= 2;
            }
        }
        else if (strcmp(choice, "rd") == 0)
        {
            kLoc[0] += 1;
            kLoc[1] += 2;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("right down")+1));
                strcpy(moveMade[movementCount].move, "right down");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] -= 1;
                kLoc[1] -= 2;
            }
        }
        else if (strcmp(choice, "dl") == 0)
        {
            kLoc[0] += 2;
            kLoc[1] -= 1;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("down left")+1));
                strcpy(moveMade[movementCount].move, "down left");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] -= 2;
                kLoc[1] += 1;
            }
        }
        else if (strcmp(choice, "dr") == 0)
        {
            kLoc[0] += 2;
            kLoc[1] += 1;

            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("down right")+1));
                strcpy(moveMade[movementCount].move, "down right");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] -= 2;
                kLoc[1] -= 1;
            }
        }
        else if (strcmp(choice, "lu") == 0)
        {
            kLoc[0] -= 1;
            kLoc[1] -= 2;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("left up")+1));
                strcpy(moveMade[movementCount].move, "left up");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] += 1;
                kLoc[1] += 2;
            }
        }
        else if (strcmp(choice, "ld") == 0)
        {
            kLoc[0] += 1;
            kLoc[1] -= 2;
            if (checkIfValid(kLoc, bSize))
            {   
                moveMade[movementCount].move = malloc(sizeof(char)*(strlen("left down")+1));
                strcpy(moveMade[movementCount].move, "left down");
                moveMade[movementCount].turn = movementCount;
                movementCount++;
            }
            else
            {
                printf("Move not legal!\n");
                kLoc[0] -= 1;
                kLoc[1] += 2;
            }
        }
        else
        {
            printf("wrong comand\n");
        }

        for (int i = 0; i < pawnsCount; i++)
        {
            if (kLoc[0] == number[i].x && kLoc[1] == number[i].y)
            {

                number[i].isTaken = 1;
            }
        }

        boardSetUp(number, bSize, kLoc, pawnsCount, figure);

        if (is_taken(number, pawnsCount))
        {

            break;
        }
    } while (1);

    fillFile (moveMade, movementCount);
    deInit(moveMade, movementCount);
   
}





