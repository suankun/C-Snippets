/*
 * Function that initializes an array of digits
 * (of your phone number) and should find the 
 * MAX digit and print it to the screen.
 */

#include <stdio.h>

int main()
{
    int phoneNumDigits[10];
    int i;
    int maxDigit;
    
    /*user input*/
    for(i = 0; i < 10; i++)
    {
        printf("Enter a digit no.%d: ", i + 1);
        scanf("%d", &phoneNumDigits[i]);
    }
    /*initializing max digit as the first digit from the phoneNumDigits*/
    maxDigit = phoneNumDigits[0];
    /*checking all the values using for loop*/
    for(i = 1; i < 10; i++)
    {
        if(maxDigit < phoneNumDigits[i])
            maxDigit = phoneNumDigits[i];
    }
    /*print the result*/
    printf("Max digit in your phone number is: %d \n", maxDigit);

    return 0;
}