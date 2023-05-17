/*
 * Write a recursive function that get some natural number "n".
 * Return 1: if every digit at an even position has an even value as well as
 * every digit at an odd position has an odd value.
 * Return 0: otherwise.
 * 
 * Example 1:
 * n = 36435
 * position 0: "5"
 * position 1: "3"
 * position 2: "4"
 * position 3: "6"
 * position 4: "3"
 * Return: 0
 * 
 * Example 2:
 * n = 438
 * position 0: "8"
 * position 1: "3"
 * position 2: "4"
 * Return: 1
 * 
 * Example 3:
 * n = 4385
 * position 0: "5"
 * position 1: "8"
 * position 2: "3"
 * position 3: "4"
 * Return: 0
 */

#include <stdio.h>

int evenOddFunc(int n)
{
    if (n < 10) // 1 digit number --> even position
        if (n % 2 == 0) // the value is even
            return 1;
        else
            return 0;   

    if (n < 100) // 2 digit number --> the right most digit (even pos.) and left digit (odd pos.)
        if (n % 10 % 2 == 0 && n / 10 % 2 == 1)
            return 1;
        else
            return 0;

    if ((n % 10 % 2 == 0) && (n / 10 % 10 % 2 == 1))
        return evenOddFunc(n / 100);
    else
        return 0;  
}

int main ()

{
    
    return 0;
}