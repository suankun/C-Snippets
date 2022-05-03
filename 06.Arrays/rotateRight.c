/*
 * Write a program that should rotate right
 * a given array by N positions.
 * Example N = 1: before [1, 2, 3, 4]
 *        		  after  [4, 1, 2, 3]
 */

#include <stdio.h> 

int main()
{
    int i, j, temp;
    int valuesArr[4] = {1, 2, 3, 4};
    int N = 1;
    /*Logic to rotate the array.*/
    for(i = 0; i < N; i++)
    {
        temp = valuesArr[3];
        for(j = 3; j > 0; j--)
        {
        valuesArr[j] = valuesArr[j - 1];
        }
        valuesArr[0] = temp;
    }
    /*Print the array.*/
    for(i = 0; i < 4; i++)
    {
        printf("%d ", valuesArr[i]);
    }
    printf("\n");

    return 0;
}