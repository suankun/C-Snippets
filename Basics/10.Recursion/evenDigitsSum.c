/*
 * Write down a recursive function that gets an integer (int n).
 * Return 1 if the sum of all the DIGITS in the received number is EVEN.
 * Otherwise return 0.
 * Example #1: n = 156, 1 + 5 + 6 = 12 --> Return value is 1
 * Example #2: n = 36859, 3 + 6 + 8 + 5 + 9 = 31 --> Return value is 0
 */

#include <stdio.h>
#include <stdlib.h>

// int evenDigitsSum(int n)
// {
//     int sum = 0;
//     if (n > 0)
//     {
//         sum += n % 10;
//         evenDigitsSum(n / 10);
//     }

//     if (sum % 2 == 0)
//         return 1;
//     else
//         return 0;
// }

// int evenDigitsSum(int n)
// {
//     int resultSoFar;

//     if (n < 10)
//         if (n % 2 == 0)
//             return 1;
//         else // n % 2 != 0
//             return 0;
//     resultSoFar = evenDigitsSum(n / 10);
//     if (n % 10 % 2 == 0) // if it is EVEN
//         if (resultSoFar == 1) // if the result is EVEN
//             return 1;
//         else // resultSoFar == 0 (the result is ODD)
//             return 0;
//     else // n % 10 % 2 == 1 // if it is ODD
//         if (resultSoFar == 1) // if the result is EVEN
//             return 0;
//         else // the result is ODD
//             return 1;

// }

int evenDigitsSum(int n)
{
    if (n < 10)
        return n % 2 ? 0 : 1;
    return n % 10 % 2 ? !evenDigitsSum(n / 10) : evenDigitsSum(n / 10);
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The result is: %d", evenDigitsSum(num));

    printf("\n");
    
    return 0;
}