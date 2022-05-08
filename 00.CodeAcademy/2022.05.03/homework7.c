/*
 * Derive the first N numbers of a series (geometric progression),
 * if given first member of the sequence and the difference between
 * the first two elements. Write a program.
 * The numbers must be read from the user.
 */

#include <stdio.h>

int main ()
{
    
    int a; // First element of the sequence.
    int ratio; // Difference between the first two elements.
    int N; // Count of numbers which have to be printed.
    int i; // Iteration for the loop.
    int value; // Variable for keeping the value of "a".

    // User input - first element of the sequence.
    printf("Enter the first element of the sequence: ");
    scanf("%d", &a);
    // User input - quotient between two elements.
    printf("Enter the quotient between two elements: ");
    scanf("%d", &ratio);
    // User input - number of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Print the series.
    value = a;
    printf("Geometric progression\n");
    for(i = 0; i < N; i++) {
        printf("%d ", value);
        value = value * ratio;
    }

    printf("\n");

    return 0;
}