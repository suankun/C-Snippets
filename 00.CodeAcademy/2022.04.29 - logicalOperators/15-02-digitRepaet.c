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

// int main()
// {
//     int num = 0;

//     do
//     {
//         scanf("%d", &num);
//     } while (num <= 100 || num >= 999);

//     int lastDigit  = num % 10;
//     num /= 10;
//     int midDigit   = num % 10;
//     num /= 10;
//     int firstDigit = num;
    
//     if (lastDigit == midDigit == firstDigit) {
//         printf("2\n");
//     } else if ((lastDigit == midDigit) || (lastDigit == firstDigit) || (midDigit == firstDigit)) {
//         printf("1\n");
//     } else {
//         printf("0\n");
//     }

//     return 0;
// }