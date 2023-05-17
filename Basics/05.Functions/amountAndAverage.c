/*
 * Function that gets some "num" (of an integer type) and a "digit".
 * The function should:
 *      1. Prints the total amount of digits in num which are less than "digit".
 *      2. Returns average of those digits (that are less than "digit").
 *
 *  Example 1: "num" = 13572, "digit" = 3 ==> print(2), return(1.5)
 *  Example 2: "num" = 123123, "digit" = 3 ==> print(4), return(1.5)
 */

#include <stdio.h>

float lowerThanDigit(int num, int digit)
{
    int counter = 0;
    int totalSum = 0;
    
    if(num < 0)
        num = num * (-1);
        
    /*digits --> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9*/
    
    while(num != 0)
    {
        if(num % 10 < digit)
        counter++;
        totalSum += num % 10;
    }
    
    num = num / 10;
    
    printf("Total amounts of digits in %d = %d \n");
    return (float)totalSum / counter;
}

int main()
{
    printf("Hello World");

    return 0;
}