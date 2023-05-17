#include <stdio.h>

int main()
{
    int num;
    int a, b;

    do
    {
        printf("Enter a 3 digit number: ");
        scanf("%d", &num);
    } while (num < 100 || num > 999);

    a = num % 10;
    num /= 100;
    b = num;

    printf("The area is: %d\n", a * b);

    return 0;
}

// int main()
// {
//     int num = 0;
//     scanf("%d", &num);

//     float a, b;
//     a = num % 10; // last digit
//     num /= 100;
//     b = num; // first digit

//     float area = 0;
//     area = (a * b) / 2.0;

//     printf("area is %.2f\n", area);

//     return 0;
// }