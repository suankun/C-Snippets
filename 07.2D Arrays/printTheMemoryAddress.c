/*
 * Address of the elements.
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
    
    /*Printing the address of the values*/
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Address of mat[%d][%d] = %p\n", i, j, &mat[i][j]);
        }
    }
    
    return 0;
}