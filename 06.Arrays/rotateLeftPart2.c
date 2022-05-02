/*
 * Write a program that should rotata left
 * a given array by N positions.
 * Example N = 2: before [1, 2, 3, 4]
 *          after  [3, 4, 1, 2]
 */

#include <stdio.h> 

int main()
{
    int i, j, temp;
    int valuesArr[4] = {1, 2, 3, 4};
    int N = 2;
    /*Logic to rotate the array.*/
    for(j = 0; j < N; j++)
    {
        temp = valuesArr[0];
        for(i = 1; i < 4; i++)
        {
        valuesArr[i - 1] = valuesArr[i];
        }
        valuesArr[3] = temp;
    }
    /*Print the array.*/
    for(i = 0; i < 4; i++)
    {
        printf("%d ", valuesArr[i]);
    }
    printf("\n");

    return 0;
}