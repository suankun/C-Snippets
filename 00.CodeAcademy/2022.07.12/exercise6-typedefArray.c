#include <stdio.h>
#include <stdlib.h>

typedef int arr[3];
typedef int *array;

int main()
{
    arr a = {1, 3, 5};
    array newArr = malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
    {
        newArr[i] = rand();
        printf("%d\t", newArr[i]);
    }

    printf("\n");
    free(newArr);

    return 0;
}