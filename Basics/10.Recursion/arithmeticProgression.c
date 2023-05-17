/*
 * Write a recursive function that:
 * 1. Receives a natural number (num)
 * 2. Returns the sum of - "Arithmetival progression from 1 to num"
 * Example: 1 + 2 + 3 + ... + num <--> 1 + 2 + 3 + ... + num-1 + num
 */

#include <stdio.h>

int sumUpTo(int num)
{
    if(num == 1)
        return 1;
        
    return num + sumUpTo(num - 1);
}

int main()
{
    int num;
    int result;

    printf("Insert your number: ");
    scanf("%d", &num);

    result = sumUpTo(num);

    printf("Result = %d\n", result);

    return 0;
}