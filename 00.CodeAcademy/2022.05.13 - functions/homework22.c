/*
 * Write a function that finds and prints the area of the circle.
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

float circleArea(float); // Prototype.

int main()
{
    float r; // Declare the variable.
    
    printf("Enter a radius of the circle: "); // User input.
    scanf("%f", &r); // Save the number in "r" (declared on line 11).

    printf("Area of the circle is %.2f\n", circleArea(r)); // Invoking the function.
    
    return 0;
}

float circleArea(float r)
{
    return PI * pow(r, 2);  // Calculate and return the result to main.
}
