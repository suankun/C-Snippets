#include <stdio.h>
#include <stdbool.h>

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

int find(int x[], int n, int number)
{
    for (int elem = 0; elem < n; elem++)
    {
        if (x[elem] == number)
        {
            return elem;
        }
    }
    return -1;
}

int main()
{
    int a[3][4];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 50;
        }
    }

    for (i = 0; i < 3; i++)
    {
        int *pRow = a[i];
        bubbleSort(pRow, 4);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int p, q;
    for (i = 0; i < 3; i++)
    {
       if (find(a[i], 4, num) >= 0)
       {
           p = i;
           q = find(a[i], 4, num);
           if (q >= 0)
           {
               printf("(%d, %d)", p, q);
           }
       }
        
    }

    return 0;
}