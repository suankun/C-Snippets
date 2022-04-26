/*
 * Function that receives as an integer the number of days
 * on the Earth and calculates the equivalent of years on Jupiter.
 * 1 year on Jupiter is 12 years on the Earth.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables*/
    int earthDays, jupiterYears;

    /*User input.*/
    printf("Enter Earth days which you would like to be converted: ");
    scanf("%d", &earthDays);

    /*Calculating the years.*/
    jupiterYears = earthDays / 365 / 12;

    /*Printing the result.*/
    printf("These days are equivalent of %d years on Jupiter!\n", jupiterYears);

    return 0;
}