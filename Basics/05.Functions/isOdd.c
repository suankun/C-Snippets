/*
 * isEven (the name of the function).
 * This function will receives an integer.
 * Return 1 if the given number is even
 * and 0 if the number is odd.
 */

#include <stdio.h>

/*Function that finds out if the number is even.*/
int isEven(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

/*
 * isOdd (the name of the function).
 * This function will receives an integer.
 * Return 1 if the given number is odd
 * and 0 if the number is even.
 */
 
int isOdd(int num)
{
    if(num % 2 != 0)
        return 1;
    else
        return 0;
}

int isOdd2(int num)
{
    if(isEven(num) == 1)
        return 0;
    return 1;
}

int main()
{
    
    return 0;
}