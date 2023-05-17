/*
 * Write a recursive function that:
 * 1. Receives a number "num"
 * 2. Returns the TOTAL DIGITS in "num"
 * Example: 567
 *          return 3
 */

#include <stdio.h>

int countOfDigits(int num)
{
    if(num < 9)
        return 1;
    
    return 1 + countOfDigits(num / 10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Count of digits in %d = %d\n", n, countOfDigits(n));

    return 0;
}