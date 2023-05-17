/*
 * Write a recursive function that:
 * 1. Receives an integer value "num"
 * 2. Reads a sequence of numbers from the user .. up until "-1"
 * 3. Return the total numbers smaller than the "num" value
 * Example: num = 5
 *          6, 8, 10, 3, 1, 7, -1
 *          return 2 - because 3 and 1 are smaller than num(5)
 */

#include <stdio.h>

int totalSmaller(int num)
{
    int inputUser;
    
    printf("Please enter a number: ");
    scanf("%d", &inputUser);

    if(inputUser == -1)
        return 0;
    if(inputUser < num)
        return 1 + totalSmaller(num);

    return totalSmaller(num);
}

int main()
{
    int n;
    printf("Enter a number to check if there are smaller numbers in sequence: ");
    scanf("%d", &n);
    
    printf("Total numbers less than %d: %d\n", n, totalSmaller(n));

    return 0;
}