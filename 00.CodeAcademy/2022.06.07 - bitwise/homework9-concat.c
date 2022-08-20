/*
 * Write a macro that connects two identifier
 * in a common (concatenation of identifiers).
 */

#include <stdio.h>

#define concat(a, b) a##b

int main()
{
    int xy = 30;
    printf("%d", concat(x, y));
    return 0;
}