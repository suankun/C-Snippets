/*
 * Write a program that collects two matrices (4x4) and writes
 * the result in a third one of the same size. Adding matrices is like
 * find the sum of the corresponding elements in them. Data on output matrices
 * must be entered by the user. Print the three matrices in the console.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[4][4] = {{0}};
    int matrix2[4][4] = {{0}};
    int matrixRes[4][4] = {{0}};
    int i, j;

    // User input for matrix1.
    printf("Enter 16 numbers for Matrix 1: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // User input for matrix2.
    printf("Enter 16 numbers for Matrix 2: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding both matrices.
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrixRes[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n");
    // Print all the matrices.
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matrixRes[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}