/*
 * Write a Fibonacci Function that:
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
    int i;
    int nextTerm, t1 = 1, t2 = 1;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    for (i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return nextTerm;
}

int main()
{
    int n;
    printf("Enter the index of Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Value at index %d is: %d\n", n, fibonacci(n));

    return 0;
}