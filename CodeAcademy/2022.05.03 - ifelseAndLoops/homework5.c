/*
 * Find the sum of these elements of a series that are doubled odd numbers if:
 * a / the row has 41 elements;
 * b / the number of the elements of the row is entered first;
 * c / the row is the last element 0;
 * d / the row has elements whose sum is greater than 999.
 */

#include <stdio.h>

// a - the row has 41 elements;
int main ()
{
    int row = 41; // Number of elements in the row.
    int i; // Iteration for the loop.
    int sum = 0; // Result variable.
    int elementsNumber; // Variable for number of iterations of the loop.
    
    // Calculating iteration for the loop.
    elementsNumber = row * 4;
    
    // 2 + 6 + 10 + 14 + 18 + 22...
    for(i = 2; i <= elementsNumber; i += 4)
    {
        sum += i;
    }

    // Print the result.
    printf("The sum is: %d\n", sum);

    return 0;
}
// b - the number of the elements of the row is entered first;
int main ()
{
    int row; // Number of elements in the row.
    int i; // Iteration for the loop.
    int sum = 0; // Result variable.
    int elementsNumber; // Variable for number of iterations of the loop.

    // User input - number of elements in the row.
    printf("Please enter the number of elements of the row: ");
    scanf("%d", &row);
    
    // Calculating iteration for the loop.
    elementsNumber = row * 4;
    
    // 2 + 6 + 10 + 14 + 18 + 22...
    for(i = 2; i <= elementsNumber; i += 4)
    {
        sum += i;
    }

    // Print the result.
    printf("The sum is: %d\n", sum);

    return 0;
}
// c - the row is the last element 0;
int main ()
{
    int row = 0; // Number of elements in the row.
    int i; // Iteration for the loop.
    int sum = 0; // Result variable.
    int elementsNumber; // Variable for number of iterations of the loop.
    
    // Calculating iteration for the loop.
    elementsNumber = row * 4;
    
    // 2 + 6 + 10 + 14 + 18 + 22...
    for(i = 2; i <= elementsNumber; i += 4)
    {
        sum += i;
    }

    // Print the result.
    printf("The sum is: %d\n", sum);

    return 0;
}
// d - the row has elements whose sum is greater than 999;
int main ()
{
    int row = 23; // Number of elements in the row.
    int i; // Iteration for the loop.
    int sum = 0; // Result variable.
    int elementsNumber; // Variable for number of iterations of the loop.
    
    // Calculating iteration for the loop.
    elementsNumber = row * 4;
    
    // 2 + 6 + 10 + 14 + 18 + 22...
    for(i = 2; i <= elementsNumber; i += 4)
    {
        sum += i;
    }

    // Print the result.
    printf("The sum is: %d\n", sum);

    return 0;
}