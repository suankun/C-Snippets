/*
 * Receives some "num" - 7425,
 * evenDigitSum = 4 + 2,
 * oddDigitSum = 7 + 5,
 * print (evenDigitSum - oddDigitSum).
 */

#include <stdio.h>

int main()
{
    int num, currentDigit;
    int evenDigitSum = 0, oddDigitSum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        /*taking the last digit from num*/
        currentDigit = num % 10;
        /*checking if the digit is even or odd*/
        if(currentDigit % 2 == 0)
            evenDigitSum += currentDigit;
        else
            oddDigitSum += currentDigit;
        /*receiving the next digit*/
        num /= 10;
    }
        
        /*print the result*/
        printf("Even digits - Odd digits = %d", evenDigitSum - oddDigitSum);
    
    return 0;
}