#include <stdio.h>

#define TOUPPER(x) (x >= 'a') ? x + 'A' - 'a' : x

int main()
{
    printf("%c\n", TOUPPER('F'));

    return 0;
}