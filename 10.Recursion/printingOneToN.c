/*
 * Write a recursive function that will receives some number "n".
 * This function will print all the numbers from 1 up to "n".
 * Example:
 * Input: 4
 * 1 2 3 4
 */

#include <stdio.h>

void printingOneToN(int n)
{
    if(n >= 1)
    {
    printingOneToN(n - 1);
    printf("%d ", n);
    }
}

void printingNToOne(int n)
{
    if(n >= 1)
    {
    printf("%d ", n);
    printingNToOne(n - 1);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printingOneToN(num);
    printf("\n");
    printingNToOne(num);
    printf("\n");

    return 0;
}