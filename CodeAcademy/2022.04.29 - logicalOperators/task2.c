#include <stdio.h>

int main()
{
    int num;
    int firstDigit, lastDigit;
    int a;

    do
    {
        printf("Enter a 3 digit number: ");
        scanf("%d", &num);
    } while (num < 100 || num > 999);

    firstDigit = (num/100) % 10;
    lastDigit = num % 10;

    if(firstDigit > lastDigit)
        a = firstDigit;
    else
        a = lastDigit;

    printf("The area is: %d\n", a * a);

    return 0;
}