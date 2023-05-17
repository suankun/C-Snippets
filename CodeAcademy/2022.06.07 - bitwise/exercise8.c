#include <stdio.h>

#define tostr(s) #s

int main()
{
    int a = 34, b = 89, c = 12;
    printf("tostr: %s\n", tostr(a / b));

    return 0;
}