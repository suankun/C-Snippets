/*
 * Write a program that calculates the number of seconds in one
 * year.
 */

#include <stdio.h>

int main()
{
    // declare the variable
    int year, days, hours, minutes, seconds;

    // initializing variables with corresponding values
    days = 365;
    hours = 24;
    minutes = 60;
    seconds = 60;

    // calculating the seconds
    year = days * hours * minutes * seconds;
    
    // printing the result
    printf("The total seconds in one year is %d.\n", year);

    return 0;
}