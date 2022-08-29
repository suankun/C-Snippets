/*
 * Read an array of integers from the keyboard.
 * Copy the entered array to a second array and multiplying the value of
 * each element by 2. Print both arrays.
 */

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE];
    int arrCopy[SIZE];
    int *ptr = arrCopy;
    int i;

    // User input
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Copying the array "arr" to array "arrCopy".
    for (i = 0; ptr + i < &arrCopy[SIZE]; i++)
    {
        *(arrCopy + i) = *(arr + i);
    }

    // Printing and multiplying the value of each element by 2.
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", 2 * arr[i]);
    }

    printf("\n");

    return 0;
}