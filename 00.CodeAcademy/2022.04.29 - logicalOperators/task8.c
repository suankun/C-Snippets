#include <stdio.h>

int main()
{
    int num;
    int a, b, c;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    a = (num / 100) % 10;
    b = (num / 10) % 10;
    c = num % 10;

    if (a < b && a < c)
        printf("0\n");
    else if (b < a && b < c)
        printf("1\n");
    else
        printf("2\n");
    
    return 0;
}