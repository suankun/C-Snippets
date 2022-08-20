#include <stdio.h>
#include <stdlib.h>

int* readArr(int n)
{
    int* result = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", result + i);
    }
    return result;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubbleSort(int x[], int n)
{
    int i;
    int br = 0;

    while (br < n - 1)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (x[i + 1] < x[i])
                swap(&x[i], &x[i + 1]);
        }
        br++;
    }
    
}

void printArr(int w[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(w + i));
    }
    printf("\n");
}

int main()
{
    int *myArr = readArr(6);
    bubbleSort(myArr, 6);
    printArr(myArr, 6);

    int number;
    scanf("%d", &number);

    int *copyArr = malloc(7 * sizeof(int));

    int i, j;
    int k = 0;
    for (i = 0; i <= 6; i++)
    {
        if (number < myArr[i])
        {
            *(copyArr + k) = number;
            k++;
            for (j = i; j <= 6; j++)
            {
                *(copyArr + k) = myArr[j];
                k++;
            }
        }
        else
        {
            if (number > myArr[i])
            {
                *(copyArr + k) = myArr[i];
                k++;
            }
        }
    }

    for (i = 0; i <= 6; i++)
    {
        printf("%d\t", copyArr[i]);
    }
    printf("\n");

    return 0;
}