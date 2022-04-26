/*
 * Function that finds the sum of 
 * all divisors of an input integer.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables.*/
    int num, i;
    int sum = 1;

    /*User input.*/
    printf("Enter the positive number: ");
    scanf("%d", &num);

    /*Logic to sum all the divisors of the received integer number.*/
    if(num == 1)
        sum = 1;
    else
    {
        for(i = 2; i <= num; i++)
        {
            if(num % i == 0)
                sum += i;
        }
    }  
    
    /*Print the result.*/
    printf("The sum is %d\n", sum);

    return 0;
}