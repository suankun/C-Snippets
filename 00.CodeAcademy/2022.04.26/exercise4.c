#include <stdio.h>

int main()
{
    unsigned int number;

    scanf("%d", &number);

    unsigned short int sum = 0;
    unsigned char ed, dec, sto, hil;

    ed = number % 10;
    dec = (number / 10) % 10;
    sto = (number / 100) % 10;
    hil = (number / 1000) % 10;

    sum = ed + dec + sto + hil;

    printf("%d\n", sum);

    return 0;
}