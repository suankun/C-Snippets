#include <stdio.h>
#include <stdlib.h>

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
            if (x[i + 1] > x[i])
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
    int a[3] = {1, 5, 8};
    int b[5] = {10, 25, 18, 2, 34};

    bubbleSort(a, 3);
    printArr(a, 3);
    bubbleSort(b, 5);
    printArr(b, 5);

    int *c = malloc(8 * sizeof(int));

    int nA = 3;
    int nB = 5;

    int i = 0, j = 0, k = 0;
    //*(c + i) = (*(a + i) > *(b + i)) ? *(a + i) : *(b + i);

    while (i < nA && j < nB)
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < nA)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < nB)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    

    printArr(a, 8);


    printf("\n");

    return 0;
}