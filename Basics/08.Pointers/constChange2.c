#include <stdio.h>
#include <stdlib.h>

void foo(int const *cip)
{
    int *ip = (int *)cip;
    *ip = 5;
}

int main()
{
    int const i = 42;
    int j = 13;
    foo(&i);
    foo(&j);
    printf("i == %d, j == %d\n", i, j);

    return 0;
}