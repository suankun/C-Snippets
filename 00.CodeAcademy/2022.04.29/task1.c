#include <stdio.h>

int main()
{
    int num;
    int a, b;

    do
    {
        printf("Enter a 3 digit number: ");
        scanf("%d", &num);
    } while (num <= 100 || num >= 999);

    a = num % 10;
    num /= 100;
    b = num;

    printf("The area is: %d\n", a * b);

    return 0;
}