/*
 * Multiplication table.
 */

#include <stdio.h>

int main()
{
    int i, j;
    int mat[2][3];
    /*Fill the values in the 2-d array*/
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    /*Printing the multiplication table*/
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}