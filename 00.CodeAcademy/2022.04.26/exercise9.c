/*
 * Function that finds the sum of 
 * all divisors of an input integer.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables.*/
    int num, i;
    int sum = 0;

    /*User input.*/
    printf("Enter the positive number: ");
    scanf("%d", &num);

    /*Logic to sum all the divisors of the received integer number.*/
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    
    /*Print the result.*/
    printf("The sum is %d\n", sum);

    return 0;
}