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

int main()
{
    int* myArr;
    myArr = readArr(6);
    printf("%d", myArr[3]);

    printf("\n");

    return 0;
}