#include <stdio.h>
#include <stdlib.h>

typedef int length;
typedef char C, *S;

int add(int a, int b)
{
    return a + b;
}

typedef int (*opt)(int, int);

int main()
{
    length n = 100;
    C c = 'c';
    S s = "Hello";
    printf("%d %c %s\n", n, c, s);
    opt fpadd = &add;
    printf("%d\n", (*fpadd)(1, 3));
    return 0;
}