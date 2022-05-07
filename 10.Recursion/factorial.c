/*
 * Write a recursive function that:
 * 1. Receives a natural number (num)
 * 2. Returns the Factorial of num
 * Example: 1 * 2 * 3 * ... * num <--> 1 * 2 * 3 + ... * (num-1) * num
 */

#include <stdio.h>

int factorial(int num)
{
    if(num == 1)
        return 1;
        
    return num * factorial(num - 1);
}

// factorial(3) --> return 3 * factorial(2)
// factorial(2) --> return 2 * factorial(1)
// factorial(1) --> 1

int main()
{
    int num;
    int result;

    printf("Insert your number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Result = %d\n", result);

    return 0;
}