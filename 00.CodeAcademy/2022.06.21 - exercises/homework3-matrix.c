/* 
 * Напишете функция, която връща двумерен масив, запълнен по
 * следния начин:
 *
 * 00 - 0, 01 - 20, 02 - 19, 03 - 17, 04 - 14
 * 10 - 1, 11 - 0,  12 - 18, 13 - 16, 14 - 13
 * 20 - 2, 21 - 5,  22 - 0,  23 - 15, 24 - 12
 * 30 - 3, 31 - 6,  32 - 8,  33 - 0,  34 - 11
 * 40 - 4, 41 - 7,  42 - 9,  43 - 40, 44 - 0
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int matrix[SIZE][SIZE] = {{0}};

    int i = 0, j = 0;

    int countStart = 1;
    int countEnd = 20;

    /* Input data in matrix */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (j == i)
            {
                matrix[j][i] = 0;
            }
            else if (j > i)
            {
                matrix[j][i] = countStart;
                countStart++;
            }
            else
            {
                matrix[j][i] = countEnd;
                countEnd--;
            }
        }
    }

    /* Display the matrix */
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}