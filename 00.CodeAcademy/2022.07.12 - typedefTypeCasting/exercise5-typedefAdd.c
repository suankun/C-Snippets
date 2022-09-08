#include <stdio.h>
#include <stdlib.h>

typedef int (*add)(int, int);
int plus(int a, int b) {return a + b;}


int main()
{
    add p = plus;
    printf("%d\n", p(1, 2));

    return 0;
}