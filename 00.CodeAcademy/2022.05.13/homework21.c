/*
 * Write a function that finds and returns the area of rectangle.
 */

#include <stdio.h>

int rectangleArea(); // Prototype.

int main()
{
    int a, b; // Declare the variables.
    
    printf("Enter side 'a': "); // User input.
    scanf("%d", &a); // Save the number in "a" (declared on line 11).

    printf("Enter side 'b': "); // User input.
    scanf("%d", &b); // Save the number in "b" (declared on line 11).

    printf("Area of the rectangle is %d\n", rectangleArea(a, b)); // Invoking the function.
    
    return 0;
}

int rectangleArea(int a, int b)
{
    return a * b;  // Calculate and return the result to main.
}
