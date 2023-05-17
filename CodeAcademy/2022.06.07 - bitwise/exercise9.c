#include <stdio.h>

int main()
{
    #if 1*1
        printf("Test 1\n");
        printf("Test 2\n");
    #endif

    #if 1*0
        printf("Test 3\n");
    #endif

    return 0;
}