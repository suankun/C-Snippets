// Даден e масив от 5 положителни числа. Да се напишат две функции, които
// намират минималната и максималната стойност , които могат да се изчислят,
// като се сумират точно 4 от тези 5 числа.
// Програмата чете масива от тези 5 числа, извиква съответните функции и
// отпечатва съответно minimum и maximum стойностите, всяка на нов ред.
// arr = [1,3,5,7,9]
// minimum sum is 1 + 3 + 5 + 7 = 16
// maximum sum is 3 + 5 + 7 + 9 = 24.
// 5. отпечатва се 16 24

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int min = 0, max = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    min = arr[0] + arr[1] + arr[2] + arr[3];
    max = arr[1] + arr[2] + arr[3] + arr[4];
    printf("minimum sum is %d + %d + %d + %d = %d\n", arr[0], arr[1], arr[2], arr[3], min);
    printf("maximum sum is %d + %d + %d + %d = %d\n", arr[1], arr[2], arr[3], arr[4], max);

    return 0;
}