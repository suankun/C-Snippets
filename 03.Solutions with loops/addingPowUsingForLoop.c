/*
 * Program that receive as input two
 * values. Number and power. Should 
 * calculate the result and print it.
 * (Without using math library!)
 */

#include <stdio.h>

int main()
{
    int num, power;
    int res = 1;
    int i;
    
    /*user input*/
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Please enter a power: ");
    scanf("%d", &power);
    
    /*printing the result using for loop*/
    for(i = 1; i <= power; i++)
    {
        res *= num;
    }
    
    /*printing the result*/
    printf("%d in the power of %d is equal to %d", num, power, res);
    
    return 0;
}
