/*
 * Write a function that gets an array, size of the array.
 * Finds the sum of all elements in the array.
 * The function should return sum.
 */

#include <stdio.h>
#include <stdlib.h>

int sumOfArray(int *pArr, int size);

int main()
{
    int arr[3] = {1, 3, 10};
    int result = 0;

    result = sumOfArray(arr, 3);

    printf("%d\n", result);

    return 0;
}

int sumOfArray(int *pArr, int size)
{
    int i;
    int sum = 0;

    for(i = 0; i < size; i++)
        sum += pArr[i];

    return sum;
}