#include <stdio.h>

int main()
{
    int n;
    int lastDigit;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    if(lastDigit == 0 || lastDigit == 5)
    {
        printf("Deli se na 5\n");
    }
    else if (lastDigit == 2)
    {
        printf("Ne se deli na 5\n");
    }

    return 0;
}