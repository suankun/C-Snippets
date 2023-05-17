#include "MainMenu.h"
#include "PawnsLoc.h"
#include "MoveKnight.h"
#include "MoveQueen.h"
#include "MoveRook.h"
#include "FileHandler.h"
#include "BoardSetUp.h"

#include <stdlib.h>
#include <stdio.h>

void mainMenu()
{
    char figure = '0';
    printf("----------//             menu                   //\n--------// Pick Your Figure\n------// Knight -> enter K\n----// Queen -> enter Q\n--//  Rook -> enter R\n// exit -> enter B\n");

    while (1)
    {
        printf("Choose : ");
        scanf(" %c", &figure);
        if (figure == 'q' || figure == 'Q')
        {
            menuFigure(figure);
            break;
        }
        else if (figure == 'k' || figure == 'K')
        {
            menuFigure(figure);
            break;
        }
        else if (figure == 'r' || figure == 'R')
        {
            menuFigure(figure);
            break;
        }
        else if (figure == 'B' || figure == 'b')
        {
            return;
        }
        else
        {
            printf("Wrong input!");
        }
    }
}

void menuFigure(char figure)
{

    char option = '0';

    printf("----------//             menu -> Figure            //\n--------// Pick Mode\n------// Random -> enter R\n----// User -> enter U\n--//  File -> enter F\n// exit -> enter B\n");

    while (1)
    {
        printf("Choose : ");
        scanf(" %c", &option);
        if (option == 'R' || option == 'r')
        {
            RandomizeFigure(figure);
            break;
        }
        else if (option == 'U' || option == 'u')
        {
            InputFigure(figure);
            break;
        }
        else if (option == 'F' || option == 'f')
        {
            FiguresFromFile(figure);
            break;
        }
        else if (option == 'B' || option == 'b')
        {
            mainMenu();
        }
        else
        {
            printf("Wrong input!");
        }
    }
}

void RandomizeFigure(char figure)
{
    int B_Size = 0;
    int P_Number = 0;
    int figureLoc[2] = {0};
    pawns *pawnsRand = NULL;

    printf("Enter board size: ");
    scanf("%d", &B_Size);
    printf("Enter number of pawns: ");
    scanf("%d", &P_Number);

    figureLoc[0] = rand() % B_Size;
    figureLoc[1] = rand() % B_Size;
    pawnsRand = RandPawnsLoc(B_Size, P_Number);

    if (figure == 'q' || figure == 'Q')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveQueen(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'k' || figure == 'K')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveKnight(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'r' || figure == 'R')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveRook(pawnsRand, B_Size, figureLoc, P_Number);
    }

    free(pawnsRand);
}

void InputFigure(char figure)
{
    int B_Size = 0;
    int P_Number = 0;
    int figureLoc[2] = {-1};
    pawns *pawnsRand = NULL;

    printf("Enter board size: ");
    scanf("%d", &B_Size);
    printf("Enter number of pawns: ");
    scanf("%d", &P_Number);

    while (!checkIfValid(figureLoc, B_Size))
    {

        printf("Enter position location of figure X Y: ");
        scanf("%d %d", &figureLoc[0], &figureLoc[1]);
    }

    pawnsRand = enterPawnsLoc(P_Number);

    if (figure == 'q' || figure == 'Q')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveQueen(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'k' || figure == 'K')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveKnight(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'r' || figure == 'R')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveRook(pawnsRand, B_Size, figureLoc, P_Number);
    }

    free(pawnsRand);
}

void FiguresFromFile(char figure)
{
    int B_Size = 0;
    int P_Number = 0;
    int figureLoc[2] = {0};
    pawns *pawnsRand = NULL;
    int size = 0;
    int *location = readFile(&size);
    P_Number = location[4];
    B_Size = location[0];
    figureLoc[0] = location[2];
    figureLoc[1] = location[3];
    pawnsRand = ReadPawnsLoc(P_Number, location, size);
    if (figure == 'q' || figure == 'Q')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveQueen(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'k' || figure == 'K')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveKnight(pawnsRand, B_Size, figureLoc, P_Number);
    }
    else if (figure == 'r' || figure == 'R')
    {
        boardSetUp(pawnsRand, B_Size, figureLoc, P_Number, figure);
        moveRook(pawnsRand, B_Size, figureLoc, P_Number);
    }

    free(location);
    free(pawnsRand);
}