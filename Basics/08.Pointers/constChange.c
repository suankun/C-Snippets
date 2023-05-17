#include <stdio.h>

int main()
{
    int const i = 42;
    int *ip = (int *)&i;
    printf("i == %d, *ip == %d\n", i, *ip);
    *ip = 13; // i == 42 or i == 13?
    printf("i == %d, *ip == %d\n", i, *ip);

    return 0;
}