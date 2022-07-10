#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isTaken1 = 0;
int isTaken2 = 0;
int isTaken3 = 0;
int isTaken4 = 0;

void boardSetUp(int pLoc[][2], int bSize, int *kLoc)
{
    // print board
    for (int i = 0; i < bSize; i++)
    {
        for (int j = 0; j < bSize; j++)
        {
            // print knight
            if (i == kLoc[0] && j == kLoc[1])
            {
                printf("k");
                continue;
            }
            // print pawns
            if (i == pLoc[0][0] && j == pLoc[0][1] && isTaken1 == 0 ||
                i == pLoc[1][0] && j == pLoc[1][1] && isTaken2 == 0 ||
                i == pLoc[2][0] && j == pLoc[2][1] && isTaken3 == 0 ||
                i == pLoc[3][0] && j == pLoc[3][1] && isTaken4 == 0)
            {
                printf("p");
                continue;
            }
            printf("_");
        }
        printf("\n");
    }
}

void move(int pLoc[][2], int bSize, int *kLoc)
{
    char choice[3];
    do
    {
        printf("Please enter your move: \n");
        printf("up left    - enter ul\n");
        printf("up right   - enter ur\n");
        printf("right up   - enter ru\n");
        printf("right down - enter rd\n");
        printf("down left  - enter dl\n");
        printf("down right - enter dr\n");
        printf("left up    - enter lu\n");
        printf("left down  - enter ld\n");
        scanf("%s", &choice);
        printf("%s\n", choice);
        if      (strcmp(choice, "ul") == 0) {kLoc[0] -= 2; kLoc[1] -= 1;}
        else if (strcmp(choice, "ur") == 0) {kLoc[0] -= 2; kLoc[1] += 1;}
        else if (strcmp(choice, "ru") == 0) {kLoc[0] -= 1; kLoc[1] += 2;}
        else if (strcmp(choice, "rd") == 0) {kLoc[0] += 1; kLoc[1] += 2;}
        else if (strcmp(choice, "dl") == 0) {kLoc[0] += 2; kLoc[1] -= 1;}
        else if (strcmp(choice, "dr") == 0) {kLoc[0] += 2; kLoc[1] += 1;}
        else if (strcmp(choice, "lu") == 0) {kLoc[0] -= 1; kLoc[1] -= 2;}
        else if (strcmp(choice, "ld") == 0) {kLoc[0] += 1; kLoc[1] -= 2;}
        
        if (kLoc[0] == 1 && kLoc[1] == 1) isTaken1 = 1;
        if (kLoc[0] == 8 && kLoc[1] == 8) isTaken2 = 1;
        if (kLoc[0] == 1 && kLoc[1] == 8) isTaken3 = 1;
        if (kLoc[0] == 8 && kLoc[1] == 1) isTaken4 = 1;

        boardSetUp(pLoc, bSize, kLoc);
    } while (strcmp(choice, "ex") != 0);
}

int main()
{
    int bSize = 10;
    int kLoc[2] = {5, 5};
    int pLoc[4][2] = {{1, 1}, {8, 8}, {1, 8}, {8, 1}};
    boardSetUp(pLoc, bSize, kLoc);
    move(pLoc, bSize, kLoc);

    return 0;
}