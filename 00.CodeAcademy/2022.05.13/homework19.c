/*
 * Write a recursive function
 * int numPrint (int n),
 * Which prints all natural numbers up to 100
 */

#include <stdio.h>

void numPrint(); // Prototype.

int main()
{
    int num = 100; // End condition for printing the numbers.
    numPrint(num); // Invoke the function.

    printf("\n");
    
    return 0;
}

void numPrint(int n)
{
    if(n > 0)
    {
        numPrint(n - 1); // Recursive calls for printing the numbers up tp "num" form main function.
        printf("%d\t", n); // Printing the number.
    }
}
