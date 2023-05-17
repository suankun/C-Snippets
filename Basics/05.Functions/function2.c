/*
 * Function that receives 2 numbers
 * and prints out Maximum and Minimum. 
 */

#include <stdio.h>

/*Creating Function with parameter and not return anything. The function prints Maximum and Minimum number.*/
void printMinMax(int num1, int num2)
{
    /*logic to find out the Maximum and the Minimum*/
    if(num1 > num2)
    {
        printf("Maximum is: %d \n", num1);
        printf("Minimum is: %d \n", num2);
    }
    else
    {
        printf("Maximum is: %d \n", num2);
        printf("Minimum is: %d \n", num1);
    }
}

int main()
{
    int a, b;
    /*user input*/
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    /*calling the function*/
    printMinMax(a, b);
    
    return 0;
}