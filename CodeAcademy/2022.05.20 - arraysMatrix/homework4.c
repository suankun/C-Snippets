/*
 * Write a program that checks if a matrix is
 * identity matrix - a matrix of size (N x N), where only the elements in the main
 * diagonals are ones and all other elements are zeros.
 */

#include <stdio.h>

int main ()

{
    int a[10][10];
    int i = 0, j = 0, row = 0, col = 0;

    printf ("Enter the order of the matrix (m x n):\n");
    printf ("where m = number of rows; and\n");
    printf ("      n = number of columns\n");
    scanf ("%d %d", &row, &col);

    int flag = 1;

    // User input.
    printf ("Enter the elements of the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    // Checks if a matrix is identity matrix.
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    // Print the matrix.
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Print the result.
    if (flag == 1)
    {
        printf ("It is an IDENTITY MATRIX\n");
    }
    else
    {
        printf ("It is NOT an identity matrix\n");
    }

    return 0;
}