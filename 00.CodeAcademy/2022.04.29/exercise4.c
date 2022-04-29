#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int z = 30;
    int t = x==y + (z < y) != 20;

    printf("%d\n", t);

    return 0;
}