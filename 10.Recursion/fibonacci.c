/*
 * Write a recursive Fibonacci Function that:
 * 1. Receives a "n" (INTEX)
 * 2. Returns VALUE at INDEX "n"
 * F0 = 0
 * F1 = 1
 * F2 = F1 + F0
 * F3 = F2 + F1
 * Fn = Fn-1 + Fn-2
 */

#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the index of Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Value at index %d is: %d\n", n, fibonacci(n));

    return 0;
}