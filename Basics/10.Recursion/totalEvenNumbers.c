/*
 * Write a recursive function that:
 * 1. Calculate and return the total number of occurences of EVEN numbers in a sequence
 * 2. Read a sequence of integers from the user .. up until -1
 * Example:
 * 1, 3, 4, 6, -1 --> 2
 */

#include <stdio.h>

int totalEvenNumbers()
{
    char tempNum;

    printf("Enter a number: ");
    scanf("%d", &tempNum);

    // Stopping condition
    if(tempNum == -1)
        return 0;
    // Recursive calls
    if(tempNum % 2 == 0)
        return 1 + totalEvenNumbers();
    
    return totalEvenNumbers();

}

int main()
{

    printf("Total occurences of EVEN number: %d\n", totalEvenNumbers());

    return 0;
}