/*
 * Receives "n" from the user,
 * Receives/read "n" values/integers,
 * sum all the odd numbers.
 */

#include <stdio.h>

int main()
{
    int i;
    int n, currentValue;
    int oddSum = 0;
    
    /*user input*/
    printf("Enter 'n' (the number of values in a sequence): ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        /*user input*/
        printf("Enter a value: ");
        scanf("%d", &currentValue);
        /*check if the current value is odd*/
        if(currentValue % 2 == 1)
            oddSum += currentValue;
    }
        
    /*print the result*/
    printf("Odd values sum = %d", oddSum);
    
    return 0;
}