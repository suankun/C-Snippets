#include <stdio.h>

long factoriel(int);

int main()
{
    unsigned char k;

    scanf("%d", &k);

    long sum = 0;

    for(int f = 1; f <= k; f++)
    {
        sum += factoriel(f);
    }

    printf("%d\n", sum);

    return 0;
}

long factoriel(int n)
{
    long product = 1;

    for(int m = 2; m <= n; m++)
    {
        product = product * m;
    }

    return product;
}