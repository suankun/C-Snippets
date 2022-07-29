#include <stdio.h>
#include <stdlib.h>
#include "FileHandler.h"

int *readFile(int *size)
{

    int capacity = 20;
    int nums = 0;
    int i = 0;

    int *num = (int *)malloc(sizeof(int) * capacity);
    FILE *fptr = NULL;

    char ch = '0';

    
    fptr = fopen("tests/knight/Case1.txt", "r");
   
    if (fptr == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    do
    {
        ch = fgetc(fptr);

        if (ch >= 48 && ch <= 57)
        {

            nums = nums * 10 + (ch - 48);
        }

       
        if ((ch == ' ' || ch == '\t' || ch == '\n' || ch == EOF))
        {
            num[i] = nums;
            i++;
            nums = 0;
            (*size) = i;

            if (capacity == i - 1)
            {
                capacity *= 2;
                num = realloc(num, sizeof(int)*capacity);
            }
        }

    } while (ch != EOF);

    fclose(fptr);

    return num;
}

void fillFile(moves *moveMade, int movementCount)
{
    FILE *fp = NULL;
    fp = fopen("tests/result/result.txt", "w");
    if (fp == NULL)
    {
        printf("Error!");
        exit(2);
    }
    for (int i = 0; i < movementCount; i++)
    {
        fprintf(fp, "%d\t", moveMade[i].turn + 1);
        fprintf(fp, "%s\n", moveMade[i].move);
    }

    fclose(fp);
}