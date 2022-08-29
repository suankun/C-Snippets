#include <stdio.h>
#include <stdlib.h>

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
    {
        p = p * base;
    }
    return p;
}

int main()
{
    int b = 2, n = 3;
    printf("%d\t%d\n", b, n);
    printf("%d\n", power(b, n));
    printf("%d\t%d\n", b, n);
    
    return 0;
}
