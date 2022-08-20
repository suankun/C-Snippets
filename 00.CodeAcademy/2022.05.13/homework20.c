/*
 * Write a program in C to count the digits of a number with
 * using a recursive function.
 */

#include <stdio.h>

int countDigits(); // Prototype.

int main()
{
    int num; // Declare the variable which digits have to be counted.
    
    printf("Enter a number: "); // User input.
    scanf("%d", &num); // Save the number in "num" (declared on line 12).

    printf("%d\n", countDigits(num)); // Invoking the function.
    
    return 0;
}

int countDigits(int n)
{
    static int counter = 0; // Initialize a static variable, to keep the value between invoking.
    // Counts the digits using recursion.
    if(n > 0)  
    {  
        counter++; // Counter to keep the numbers of digits.
        countDigits(n/10);  // Recursion calls.
    }  
    else  
        return counter;  // Return the result to main.
}
