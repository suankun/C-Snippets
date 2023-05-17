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

void insertionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];

        int j = i - 1;  // предходния на key
        while (j >= 0 && a[j] > key) // докато key е по-голям от предходния елемент
        {
            a[j + 1] = a[j]; // текущия става равен на предходния - актуализираме ..
            j = j - 1; // актуализираме индекса
        }
        
        a[j + 1] = key;
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
    insertionSort(array, N);
    printArray(array, N);
    printf("\n");

    return 0;
}