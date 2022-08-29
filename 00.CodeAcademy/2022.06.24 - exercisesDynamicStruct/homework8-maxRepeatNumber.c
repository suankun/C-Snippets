// Напишете метод, който намира най-дългата подредица от равни числа в даден
// списък от int и връща като резултат нов списък от int със тази подредица.
// Напишете програма, която проверява дали тази функция работи коректно.
// Упътване:
// Сортирайте списъка и след това с едно обхождане намерете началния индекс и броя
// елементи на най-дългата подредица от равни числа. Направете нов списък и го
// попълнете с толкова на брой елементи.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 13

void printArray(int *arr, int size);
void swap(int *x, int *y);
void bubbleSort(int *arr, int size);
void getMaxRepeatingElement(int *arr, int size);

int main()
{
    int arr[SIZE] = {7, 8, 5, 9, 4, 3, 2, 7, 6, 7, 4, 2, 3};
    bubbleSort(arr, SIZE);
    printArray(arr, SIZE);
    printf("\n");
    getMaxRepeatingElement(arr, SIZE);

    return 0;
}

void printArray(int *arr, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *arr, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
  
        // Last i elements are already in place
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void getMaxRepeatingElement(int *arr, int size) 
{
    int i, j, maxElement, count = 0, indexArr = 0;
    int maxCount = 0;
    int arrRes[indexArr];
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i+1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > maxCount)
                {
                    maxElement = arr[j];
                }
                if (indexArr < count)
                {
                    indexArr = count;
                }
            }
        }
    }
    for (int k = 0; k < indexArr; k++)
    {
        arrRes[k] = maxElement;
    }
    for (int l = 0; l < indexArr; l++)
    {
        printf("%d ", arrRes[l]);
    }
    printf("\n");
}