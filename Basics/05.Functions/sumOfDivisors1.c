/*
 * Function that receives an integer num,
 * function should calculate and return its SUM OF DIVISORS.
 * A "divisor" of "num" is considered to be a number that <<< "num" % "divisor" = 0 >>>
 * For example:
 *   6 --> 1, 2, 3, 6;
 *  12 --> 1, 2, 3, 4, 6, 12;
 *  15 --> 1, 3, 5, 15;
 */

#include <stdio.h>

int sumOfDivisors(int num);

int main()
{

    return 0;
}

int sumOfDivisors(int num)
{
    int i;
    int sum = 1;
    if(num == 1)
        return num;
        
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    
    return sum;
}