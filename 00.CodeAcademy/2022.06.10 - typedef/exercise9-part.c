#include <stdio.h>

struct info
{
    int x;
    int y
    struct info * p;
};

int main()
{
    struct info info1;
    struct info info2;

    info1.p = &info2;
    info2.p = &info1;

    info2.p -> x = 10;
    info2.p -> y = 10;

    info1.p -> x = 20;
    info1.p -> y = 20;

    printf("%d %d", info1.x, info1.y);

    return 0;
}