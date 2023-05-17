/*
 * Write a recursive function that:
 * 1. Receives a number "num"
 * 2. Returns the SUM of all DIGITS
 * Example: 567
 *          5 + 6 + 7
 *          return 18
 * 
 * sumOfDigits(567) = 7 + sumOfDigits(56) = 7 + 6 + sumOfDigits(5) = 7 + 6 + 5
 */

#include <stdio.h>

int sumOfDigits(int num)
{
    if(num < 9)
        return num;
    
    return num % 10 + sumOfDigits(num / 10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Sum of digits for %d is: %d\n", n, sumOfDigits(n));

    return 0;
}