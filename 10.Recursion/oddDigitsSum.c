/*
 * Write down a recursive function that gets an integer (int n).
 * Return 1 if the sum of all the DIGITS in the received number is ODD.
 * Otherwise return 0. In the case that teh SUM is EVEN.
 * Example #1: n = 156, 1 + 5 + 6 = 12 --> Return value is 0
 * Example #2: n = 36859, 3 + 6 + 8 + 5 + 9 = 31 --> Return value is 1
 */

#include <stdio.h>
#include <stdlib.h>

int evenDigitsSum(int n)
{
    int resultSoFar;

    if (n < 10)
        if (n % 2 == 0) // EVEN number
            return 0;
        else // n % 2 != 0 --> ODD number
            return 1;
    resultSoFar = evenDigitsSum(n / 10);
    if (n % 10 % 2 == 0) // if it is EVEN
        if (resultSoFar == 1) // if the result is ODD
            return 1;
        else // resultSoFar == 0 (the result is EVEN)
            return 0;
    else // n % 10 % 2 == 1 // if it is ODD
        if (resultSoFar == 1) // if the result is ODD
            return 0;
        else // the result is EVEN
            return 1;

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