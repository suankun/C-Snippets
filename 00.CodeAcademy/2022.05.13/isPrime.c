#include <stdio.h>

int isPrime();

int main()
{
    int a, b, c;
    printf("Enter a positive integer 1: ");
    scanf("%d", &a);

    printf("Enter a positive integer 2: ");
    scanf("%d", &b);

    printf("Enter a positive integer 3: ");
    scanf("%d", &c);

    if (isPrime(a))
        printf("%d\n", a);
    if (isPrime(a))
        printf("%d\n", b);
    if (isPrime(a))
        printf("%d\n", c);

    return 0;
}

int isPrime(int n)
{
    int i;

    for (i = 2; i <= n / 2; ++i)
    {
    if (n % i == 0)
        return 0;
    else
        return 1;
    }

    return 0;
}