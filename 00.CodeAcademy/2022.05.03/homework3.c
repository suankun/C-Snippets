/*
 * Given a natural number N, find all pairs of natural 
 * numbers M and K for which M2 + K2 = N.
 */

#include <stdio.h>

int main ()
{
    
    int N = 10; // The natural number.
    int M2 = 0, K2 = 10; // Numbers in which range we will look for combinations.
    int i, j; // Iteration for the loops.
    int res = 0; // Result variable
    int counter = 0; // Counter for the combinations.
    int isFound = 0; // flag to break the loops.

    // Printing the combination for which M2 + K2 = N.
    for (i = M2; i <= K2; i++)
    {
        for (j = M2; j <= K2; j++)
        {
            counter++;
            res = i + j;
            if (res == N)
            {
                printf("Combination N:%d (%d + %d = %d)\n", counter, i, j, res);
                isFound = 1;
                break;
            }
    }
    if (isFound == 0)
    {
        break;
    }
  }

  return 0;
}