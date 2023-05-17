#include <stdio.h>

int main()
{
    int matrix1[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matrix2[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int i, j;
    int flag = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                flag = 0;
                printf("They are different!");
                break;
            }
            
        }
    }

    if (flag)
    {
        printf("They are equivalent!");
    }

    printf("\n");

    return 0;
}