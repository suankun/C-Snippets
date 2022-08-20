#include <stdio.h>

#define DEBUG 0

int main()
{
    #if DEBUG
        printf("%d", 10);
    #endif

    return 0;
}