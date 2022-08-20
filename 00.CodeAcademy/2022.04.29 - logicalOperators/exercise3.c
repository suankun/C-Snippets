#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    int t, f;

    t = x == y;
    f = x != y;

    printf("t = %d\n", t);
    printf("f = %d\n", f);

    return 0;
}