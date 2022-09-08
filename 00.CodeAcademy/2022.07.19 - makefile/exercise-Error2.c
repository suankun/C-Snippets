#include <stdio.h>
#include <stdlib.h>

int main ()
{ 
    int a = 1;
    int b = 0;
    int c;

    if (b == 0)
    {
        fprintf(stderr, "Zero can not be a divisor...\n");
        exit(-1);
    }

    c = a / b;
    fprintf(stderr, "The result of division is %d\n", c);
    Exit(0);
    return 0;
} 