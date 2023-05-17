/*
 * Write a recursive function that will receives some number "n".
 * This function will print all the numbers from "n" to 1 and vice versa.
 * Example:
 * Input: 4
 * 4 3 2 1 2 3 4
 */

#include <stdio.h>

void finalNto1AndViceVersa(int n)
{
    if(n == 1)
    {
        printf("%d ", n);
    }
    else // (n > 1)
    {
        printf("%d ", n);
        finalNto1AndViceVersa(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    finalNto1AndViceVersa(num);

    printf("\n");

    return 0;
}