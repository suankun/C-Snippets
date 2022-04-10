/*
 * A program that checks if a given
 * year is a Leap Year. 
 */
 
#include <stdio.h>

int main()
{
    int year;
    
    /*user input*/
    printf("Enter a year: ");
    scanf("%d", &year);
    
    /*logic to find out if a year is a Leap*/
    if(year % 400 == 0)
        printf("A Leap Year!\n");
    else if(year % 100 == 0)
        printf("Not a Leap Year!\n");
    else if(year % 4 == 0)
        printf("A Leap Year!\n");
    else
        printf("Not a Leap Year!\n");

    return 0;
}
