#include <stdio.h>
#include <stdlib.h>

// Print array;
void printArray(int *ptr, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", ptr[i]);
    printf("\n");
}

// Reset all the elements of an array to 0;
void resetElementsToZero(int *ptr, int size)
{
    int i;
    for(i = 0; i < size; i++)
        ptr[i] = 0;
}

int main()
{
    int arr[3] = {1, 3, 10};
    printf("Before Reset:\n");
    printArray(arr, 3);
    resetElementsToZero(arr, 3);
    printf("After Reset:\n");
    printArray(arr, 3);

    return 0;
}