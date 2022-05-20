#include <stdio.h>

int pellNumberRecursive(int n);
int pellNumber(int n);

int main()
{
    int num = 3;
    int resultRec = 0;
    int result = 0;

    resultRec = pellNumberRecursive(num);
    result = pellNumberRecursive(num);

    printf("The Pell Number at index %d is %d\n", num, resultRec);
    printf("The Pell Number at index %d is %d\n", num, result);

    return 0;
}

int pellNumberRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        return 2 * pellNumberRecursive(n - 1) + pellNumberRecursive(n - 2);
    }
}

int pellNumber(int n)
{
    int i;
    int previous = 0, current = 1;
    int next;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    // Pn(next) = 2 * Pn-1(current) + Pn-2(previous)
    for(i = 0; i <= n; i++)
    {
        next = 2 * current + previous;
        previous = current;
        current = next;
    }

    return next;
}