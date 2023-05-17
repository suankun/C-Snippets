#include <stdio.h>

int main()
{
    int x = 3;
    int y = 5;
    int z = x & y;
    int p = x | y;
    int q = x ^ y;

    printf("%d\n", z);
    printf("%d\n", p);
    printf("%d\n", q);

    int a = 13256489;
    printf("%d\n", a ^ a); // gives 0 because the integer is the same

    return 0;
}