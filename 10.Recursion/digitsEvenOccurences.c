/*
 * Exercise:
 * Develop a recursive function that receives an integer "num" and a "digit".
 * The function should return:
 *      - 1 - if the count of "digit" occurences in num is even.
 *      - 0 - otherwise (if the count of "digit" occurences in num is odd).
 * For example:
 *      num = 124, digit = 2 --> 0 (1 occurences - odd)
 *      num = 12342, digit = 2 --> 1 (2 occurences - even)
 *      num = 10200240, digit = 0 --> 1 (4 occurences - even)
 */

#include <stdio.h>

int digitsEvenOccurences(int num, int digit)
{
    int totalAppearancesSoFar;
    if (num < 10) // if num is 1 digit
        if (num != digit) // 0 appearances ==> even appearances
            return 1;
        else // num == digit
            return 0; // digit appears once in num ==> odd appearances
    
    totalAppearancesSoFar = digitsEvenOccurences(num / 10, digit);
    if (totalAppearancesSoFar == 1) // So far we had even appearances of digit in num/10
        if (num % 10 == digit)
            return 0;
        else // nothing changed because digit != num % 10
            return 1;
    else // totalAppearancesSoFar == 0
        if (num % 10 == digit)
            return 1;
        else
            return 0;
}

// int digitsEvenOccurences(int num, int digit)
// {
//     if (num < 10) // if num is 1 digit
//         if (num != digit) // 0 appearances ==> even appearances
//             return 1;
//         else // num == digit
//             return 0; // digit appears once in num ==> odd appearances
    
//         if (num % 10 != digit)
//             return digitsEvenOccurences(num / 10, digit); // keeping the status so far the same..
//         else // num % 1 digit
//             return !digitsEvenOccurences(num / 10, digit); // changing the status (0->1 | 1->0)
// }

int main()
{
    printf("%d", digitsEvenOccurences(124, 2));
    printf("\n");

    printf("%d", digitsEvenOccurences(12342, 2));
    printf("\n");

    printf("%d", digitsEvenOccurences(10200240, 0));
    printf("\n");
    
    return 0;
}