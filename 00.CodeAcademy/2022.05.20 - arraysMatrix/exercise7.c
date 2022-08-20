#include <stdio.h>
#include <stdlib.h>

void eha(int, int);

int main(void)
{
    int i = 50, a[3] = {90, 80, 60};

    eha(i, a[0]);
    printf("In main(), i = %d, a[0] = %d\n", i, a[0]);

    return 0;
}

void eha(int q, int w)
{
    printf("In eha(), q = %d, w = %d\n", q, w);
    q = 0;
    w = 0;
}