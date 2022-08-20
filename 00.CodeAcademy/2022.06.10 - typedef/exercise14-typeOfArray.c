#include <stdio.h>
#include <stdlib.h>

typedef int arr[5];

int main()
{
    arr myArr = {4, 9, 6, 2, 8};
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d \t", myArr[i]);
    }
    printf("\n");

    arr myArr2 = {7, 1, 8, 2, 3};

    for (i = 0; i < 5; i++)
    {
        printf("%d \t", myArr2[i]);
    }
    printf("\n");

    return 0;
}