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

long fibonacci(int n)
{
    if(n == 1 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the index of Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Value at index %d is: %ld\n", n, fibonacci(n));

    return 0;
}/*
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

long fibonacci(int n)
{
    if(n == 1 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the index of Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Value at index %d is: %ld\n", n, fibonacci(n));

    return 0;
}