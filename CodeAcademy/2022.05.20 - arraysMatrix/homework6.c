/*
 * Write a program that prints the number of unique rows in a binary
 * a matrix composed only of ones and zeros.
 */

#include <stdio.h>

#define ROW 3
#define COL 3

int main ()

{
    int a[ROW][COL] = {{1, 0, 0}, {1, 0, 0}, {0, 1, 0}};
    int i = 0, j = 0, k = 0;

    // Search through the matrix
    for (i = 0; i < ROW; i++)
    {
        int flag = 0;
         
        // Check if there is similar column printed.
        for (j = 0; j < i; j++)
        {
            flag = 1;
             
            for (k = 0; k < COL; k++)
            {
                if (a[i][k] != a[j][k])
                {
                    flag = 0;
                }
             
                if (flag == 1)
                {
                    break;
                }
            }
        }
         
        // If there is no similar row.
        if (flag == 0)
        {
            // Print the row.
            for (j = 0; j < COL; j++)
            {
                printf("%d ", a[i][j]);
            }
            
        }

        // If no similar row --> print new line.
        if (flag == 0)
        {
            printf("\n");
        }
    }
    return 0;
}