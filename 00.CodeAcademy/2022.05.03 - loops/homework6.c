/*
 * Derive the first N numbers of a series (arithmetic progression),
 * if given the first member of the sequence and the difference
 * between the first two elements. Write a program.
 * The numbers must be read from the user.
 */

#include <stdio.h>

int main ()
{
    int a; // First element of the sequence.
    int diff; // Difference between the first two elements.
    int N; // Count of numbers which have to be printed.
    int i; // For loop iteration.
    int iteration; //Iteration of the loop.

    // User input - first element of the sequence.
    printf("Enter the first element of the sequence: ");
    scanf("%d", &a);
    // User input - difference between the first two elements.
    printf("Enter the difference between two elements: ");
    scanf("%d", &diff);
    // User input - count of numbers which have to be printed.
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Calculating the iterations.
    iteration = N * diff;

    // Uisng for loop to print the sequence.
    for(i = 1; i <= iteration; i = i + diff)
        printf("%d\t", i);

    printf("\n");

    return 0;
}