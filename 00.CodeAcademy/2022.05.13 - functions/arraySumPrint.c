#include <stdio.h>

int sum(int *a, int n)
{
    int i;
    int sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

void printArray(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("Index %d = %d\n", i, a[i]);
}

int main()
{
    int a[5] = {1, 3, 4, 6, 7};
    
    printf("Sum = %d", sum(a, 5));
    printf("\n");

    printArray(a, 5);
    
    return 0;
}