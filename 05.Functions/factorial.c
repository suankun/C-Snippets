/*
 * Function that receives a number.
 * Calculates its factorial.
 * Returns the result.
 */

#include <stdio.h>

/*Creating a function that calculates the factorial.*/
int factorial(int num)
{
    int i, sum = 1;
    /*check if the input number is less then 0*/
    if(num < 0)
        return -1;
    /*Logic for calculates the factorial of a number.*/
    for(i = 1; i <= num; i++)
    {
        sum *= i;
    }
    
    return sum;
}

int main()
{
    int n;
    
    /*user input*/
    printf("Enter a number: ");
    scanf("%d", &n);
    
    /*printing the result*/
    printf("Factorial(%d) = %d", n, factorial(n));
    
    return 0;
}