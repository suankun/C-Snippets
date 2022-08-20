#include <stdio.h>

int addition(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 2, b = 3;
    int *ptr_a = &a;
    int *ptr_b = &b;

    printf("%d + %d = %d\n", a, b, addition(ptr_a, ptr_b));

    return 0;
}