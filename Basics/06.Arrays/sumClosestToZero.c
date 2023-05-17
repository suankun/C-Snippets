/*
 * Program that prints the sum of two
 * elements that is the most close to 0.
 * Example array: [1, -2, 2, 3]
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4] = {-1, 2, 3, -6};
    int i, j;
    int minSum = arr[0] + arr[1];
    int currentSum;

    for(i = 0; i < 4 ; i++)
    {
        for(j = i + 1; j < 4 ; j++)
        {
            currentSum = arr[i] + arr[j];
            if(abs(currentSum) < abs(minSum))
                minSum = currentSum;
        }
    }

    printf("Min sum is %d\n", minSum);

    return 0;
}