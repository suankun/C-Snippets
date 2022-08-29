#include <stdio.h>
#include <stdlib.h>

void readArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
}

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}

void selectionSort(int *a, int n)
{
    int minElement;
    for (int j = 0; j < n - 1; j++)
    {
        minElement = j;
        for (int k = j + 1; k < n; k++)
        {
            if (a[minElement] > a[k])
            {
                minElement = k;
            }
        }
        int tmp = a[minElement];
        a[minElement] = a[j];
        a[j] = tmp;
    }
}

int main()
{
    int N = 10;
    int *array;
    array = (int *) malloc(sizeof(int) * N);
    readArray(array, N);
    printArray(array, N);
    printf("\n");
    selectionSort(array, N);
    printArray(array, N);
    printf("\n");

    return 0;
}