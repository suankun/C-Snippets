#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matrix2[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matrixRes[4][4];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrixRes[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrixRes[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}