/*
 * Write a function called isTriangle, which for three given numbers
 * determines whether there is a triangle with these given numbers.
 */

#include <stdio.h>

void isTriangle(); // Prototype.

int main()
{
    int a, b, c; // Sides of the triangle.
    
    printf("Enter side 'a': "); // User input.
    scanf("%d", &a); // Save the number in "a" (declared on line 12).
    printf("Enter side 'b': "); // User input.
    scanf("%d", &b); // Save the number in "b" (declared on line 12).
    printf("Enter side 'c': "); // User input.
    scanf("%d", &c); // Save the number in "c" (declared on line 12).

    isTriangle(a, b, c);
    
    return 0;
}

void isTriangle(int a, int b, int c)
{
    if(a < b + c && b < a + c && c < a + b)
        printf("Yes, there IS a triagle with sides %d, %d, %d!\n", a, b, c);
    else
        printf("No, there IS NOT a triagle with sides %d, %d, %d!\n", a, b, c);
}
