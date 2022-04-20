/*
 * Function that receives no parameter,
 * receives from the user 3 numbers as input (integers),
 * finds the Maximum between these 3 numbers.
 * Function will return the Maximum.
 */

#include <stdio.h>

/*Creating Function without parameters. The function returns Maximum between 3 numbers.*/
int maxBetween3()
{
    int num1, num2, num3;
    /*user input*/
    printf("Enter num1, num2 and num3: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    /*logic to find the maximum between 3 numbers*/
    if(num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else if(num2 > num3)
        return num2;
    else
        return num3;
}

int main()
{
    int max;
    /*assigning value to int max with calling the function maxBetween3*/
    max = maxBetween3();
    /*printing the result*/
    printf("Maximum - %d", max);
    
    return 0;
}