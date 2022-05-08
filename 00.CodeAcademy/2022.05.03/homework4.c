/*
 * Given are a, b, N (b! = 0, 1 <= N <= 100).
 * Find the quotient a/b and print on the screen
 * with N digits after the decimal point.
 */

#include <stdio.h>
#include <math.h>
// Solution 1:
int main ()
{
    double a, b, res; // Divisible and divisor.
    int N; // Digits after the decimal point.
    int i; // Itteration of the for loop.

    // User input - enter a divisible.
    printf("Enter a divisible: ");
    scanf("%lf", &a);
    // User input - enter a divisor.
    printf("Enter a divisor (must be different from 0 and 1): ");
    scanf("%lf", &b);
    // User input - precision after decimal point.
    printf("Enter the accuracy after the decimal point: ");
    scanf("%d", &N);

    // Calculating the precision after decimal point.
    res = a / b;
    int tempMult = 1;
    for(i = 0; i < N; i++)
    {
        tempMult *= 10;
    }
    
    // Round the result up to N digits after the decimal point.
    double value = round(res * tempMult) / tempMult;
    
    // Print the result.
    printf("%g / %g = %g\n", a, b, value);

    return 0;
}
// Solution 2:
int main ()
{
    double a, b, res; // Divisible and divisor.
    int N; // Digits after the decimal point.

    // User input - enter a divisible.
    printf("Enter a divisible: ");
    scanf("%lf", &a);
    // User input - enter a divisor.
    printf("Enter a divisor (must be different from 0 and 1): ");
    scanf("%lf", &b);
    // User input - precision after decimal point.
    printf("Enter the accuracy after the decimal point: ");
    scanf("%d", &N);
    
    // Calculating the result
    res = a / b;
    // Print the result.
    printf("%g / %g = %.*lf\n", a, b, N, res);

    return 0;
}
