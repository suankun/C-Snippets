#include <stdio.h>

int main()
{
    int n, product = 1;
    int i;

    printf("Enter any number: ");
    scanf("%d", &n);

    // while (n != 0)
    // {
    //     product = product * ( n % 10);

    //     n = n / 10;
    // }

    for(; n > 0; n /= 10)
    {
        product *= n % 10;
    }

    printf("Product of digits = %d\n", product);
    
    return 0;
}