#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *s;
    int n
} key_t;

int main()
{
    key_t a;
    a.n = 6;
    a.s = malloc(a.n);

    return 0;
}