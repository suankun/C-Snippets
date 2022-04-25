/*
 * Example of usage of pointers.
 */

#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;
    
    printf("num1 = %d, num2 = %d\n", num1, num2); // 5, 7
    
    ptrA = &num1;
    ptrB = &num2;
    
    printf("num1 = %d, num2 = %d\n", num1, num2); // 5, 7
    
    *ptrA = *ptrA + 1; // num1 = 6
    *ptrB = *ptrB + 3; // num2 = 10
    
    printf("num1 = %d, num2 = %d\n", num1, num2); // 6, 10
    
    ptrA = ptrB; // ptrA = num2, ptrB = num2
    ptrB = ptrA; // ptrB = num2
    
    printf("num1 = %d, num2 = %d\n", num1, num2); // 6, 10
    printf("*ptrA = %d, *ptrB = %d\n", *ptrA, *ptrB); //10, 10
    
    num1 = *ptrB; // 10
    num2 = num1 - 3; // 7
    
    printf("num1 = %d, num2 = %d\n", num1, num2); // num1 = 10, num2 = 7
    
    return 0;
}