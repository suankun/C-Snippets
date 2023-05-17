/*
 * Initialize and print 2-D Array.
 */

#include <stdio.h>

int main()
{
    int my2DArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}