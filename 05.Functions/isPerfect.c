/*
 * Function that receives an integer num,
 * function should return 1 if "num" is a perfect number. Otherwise, return 0.
 * A "perfect" number is a number with a value equals to the sum of all of its divisors
 * (not including the number itself)
 * For example:
 *   6 --> 1, 2, 3 = 6 --> A PERFECT NUMBER
 *  12 --> 1, 2, 3, 4, 6 = 16 --> NOT A PERFECT NUMBER
 *  15 --> 1, 3, 5 = 9 --> NOT A PERFECT NUMBER
 */

#include <stdio.h>

int sumOfDivisors(int num);
int isPerfect(int num);

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
        
    for(i = 2; i * i < num; i++)
    {
        if(num % i == 0)
            sum = sum + i + num/i;
    }
    
    if(i * i == num)
        sum = sum + i;
    
    return sum + num;
}

int isPerfect(int num)
{
    if(num <= 1)
        return 0;
    if(num == sumOfDivisors(num))
        return 1;
    return 0;
}