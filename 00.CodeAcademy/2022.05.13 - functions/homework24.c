/*
 * Write a function which, with given the limits of the interval [a, b],
 * finds and displays the sum of the even numbers of this interval.
 */

#include <stdio.h>

int evenNumbersSum(); // Prototype, declaration.

int main()
{
    int a = 0, b = 0; // "Start" and "end" numbers.
    int result; // Storing the result of the function evenNumbersSum().
    
    printf("Enter start number 'a': "); // User input.
    scanf("%d", &a); // Start condition, save the number in "a".
    printf("Enter end number 'b': "); // User input.
    scanf("%d", &b); // End condition, save the number in "b".

    result = evenNumbersSum(a, b);

    printf("The sum of even numbers in interval from %d to %d is %d\n", a, b, result);
    
    return 0;
}

int evenNumbersSum(int a, int b)
{
    int i; // Iteration for the loop.
    int sum = 0; // Variable to store the sum of the even numbers.
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0) // Checking if the number is even.
        {
            sum += i; // Store and sum the even numbers.
        }
    }

    return sum; // Result.
}