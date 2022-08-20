/*
 * Write a program that calculates the number of seconds in one
 * year.
 */

#include <stdio.h>

int main()
{
    /*Declare the variable*/
    int year, days, hours, minutes, seconds;

    /*Initializing variables with corresponding values*/
    days = 365;
    hours = 24;
    minutes = 60;
    seconds = 60;
    /*Calculating the seconds.*/
    year = days * hours * minutes * seconds;
    /*Printing the result.*/
    printf("The total seconds in one year is %d.\n", year);

    return 0;
}