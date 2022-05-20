#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 3, b = 4;

    swap(&a, &b);

    printf("a is %d\n", a);
    printf("b is %d\n", b);
}