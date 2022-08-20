#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", RAND_MAX);
    int *arr = malloc(100 * sizeof(int));
    int i;

    for (i = 0; i < 100; i++)
        *(arr + i) = rand() % 100;

    for (i = 0; i < 100; i++)
        printf("%d\t", *(arr + i));

    printf("\n");

    return 0;
}