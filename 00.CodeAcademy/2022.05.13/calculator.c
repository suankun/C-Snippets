#include <stdio.h>

int addition();
int subtraction();
int multiplication();
int division();
int remeinder();

int main()
{
    int a = 4;
    int b = 2;

    printf("%d\n", addition(a, b));
    printf("%d\n", subtraction(a, b));
    printf("%d\n", multiplication(a, b));
    printf("%d\n", division(a, b));
    printf("%d\n", remeinder(a, b));
    
    return 0;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int remeinder(int a, int b)
{
    return a % b;
}
