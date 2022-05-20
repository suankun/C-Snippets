#include <stdio.h>

int main(void)
{
    unsigned n = 4242;
    unsigned digits;

    for (digits = 0; n > 0; n /= 10, digits++);
        printf("Count of digits in %u is %u\n", n, digits);

    return 0;
}