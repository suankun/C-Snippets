/*
 * Write a recursive function that:
 * 1. Calculate and return the SUM of all EVEN numbers in a sequence
 * 2. Read a sequence of integers from the user .. up until -1
 * Example:
 * 1, 3, 4, 6, -1 --> 10
 */

#include <stdio.h>

int sumOfEvenNumbers()
{
    char tempNum;

    printf("Enter a number: ");
    scanf("%d", &tempNum);

    // Stopping condition
    if(tempNum == -1)
        return 0;
    // Recursive calls
    if(tempNum % 2 == 0)
        return tempNum + sumOfEvenNumbers();
    
    return sumOfEvenNumbers();

}

int main()
{

    printf("SUM of all EVEN numbers: %d\n", sumOfEvenNumbers());

    return 0;
}