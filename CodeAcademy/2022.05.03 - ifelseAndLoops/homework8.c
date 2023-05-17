/*
 * For given N, calculate A (0) + A (1) + A (2) + ... + A (N), if A (0) = 1, A (K + 1) = 2.A ) +1 for K> = 1.
 * Calculate with a precision of 6 decimal places the number PI according to the formula of Gottfried Leibniz from 1673:
 */
/*int argc, char* argv[ ]*/

#include <stdio.h>

#define M_PI 3.14159265358979

int main ()
{
    /*Declare the variables.*/
	float numerator = 4.0;
    float denominator = 1.0;
    float fraction = 1.0;
    float pi = 0.0;
    int terms;
    int i;

    // User input - terms of series that should be included.
	printf("Please enter the terms of series that should be included: ");
	scanf("%d", &terms);

	for (i = 1; i < terms; i++)
    {
        fraction = numerator/denominator;
        // Determine ODD or EVEN counter.
        if ( i % 2)
            pi += fraction; // Add fraction if LoopCounter is ODD.
        else
            pi -= fraction; // Subtract if LoopCounter is EVEN.
        
        // Prepare for next iteration through the loop.
        // 1.0, 3.0, 5.0, 7.0, 9.0, etc.
        denominator += 2.0;
    }
    
    printf ("Approximate value: %.6f\n", pi); // Approximate value.
    printf ("Original value:    %.6f\n", M_PI); // Original value.

	return 0;
}