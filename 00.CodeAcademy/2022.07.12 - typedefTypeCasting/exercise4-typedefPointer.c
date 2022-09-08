#include <stdio.h>
#include <stdlib.h>

typedef int* num;


int main()
{
    int a = 3;
    num b = &a;
    printf("%d\n", *b);

    return 0;
}