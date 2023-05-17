/*
 * Function that receives a 2 digits number.
 * Makes sure it has 2 digits.
 * Finds and prints maximum digit.
 */

#include <stdio.h>

/*Creating a function that find the maximum digit of 2 digits number.*/
void maxDigit(int num)
{
    /*Logic to find out the maximum digit in 2 digits number.*/
    if(num > 99 && num < 10)
        printf("The number is not valid, enter the 2-digits number!\n");
    else
    {
        if(num % 10 > num / 10)
            printf("Maximum digit in %d is: %d\n", num, num % 10);
        else
            printf("Maximum digit in %d is: %d\n", num, num / 10);
    }
}

int main()
{
    int n;
    /*user input*/
    printf("Enter a 2-digits number: ");
    scanf("%d", &n);
    /*printing the result*/
    maxDigit(n);
    
    return 0;
}