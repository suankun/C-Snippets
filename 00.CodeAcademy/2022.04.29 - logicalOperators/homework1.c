/*
 * Problem 1: Write a program that reads an integer six-digit number,
 * separates from it the digits of positions 1,3,5 and 6 
 * and with these digits forms a new one
 * a four-digit number. If we consider this new number as
 * year, the program must determine whether this year is high or not.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables*/
    int num, year;
    int firstDigit, thirdDigit, fifthDigit, sixthDigit;

    /*User input.*/
    do
    {
        printf("Enter a 6 digits number: ");
        scanf("%d", &num);
    } while (num < 100000 || num > 999999);

    /*Take out 1, 3, 5, 6 digits from the user input.*/
    firstDigit = (num/100000) % 10;
    thirdDigit = (num/1000) % 10;
    fifthDigit = (num/10) % 10;
    sixthDigit = num % 10;
    /*Creating a year from the received digits.*/
    year = (firstDigit * 1000) + (thirdDigit * 100) + (fifthDigit * 10) + sixthDigit;
    /*Printing the year.*/
    printf("%d ", year);
    /*Logic to find out if a year is a Leap and printing the result.*/
    if(year % 400 == 0)
        printf("is a Leap Year!\n");
    else if(year % 100 == 0)
        printf("is not a Leap Year!\n");
    else if(year % 4 == 0)
        printf("is a Leap Year!\n");
    else
        printf("is not a Leap Year!\n");

    return 0;
}

/////////////

// void leapYear(int year) {

//    // leap year if perfectly divisible by 400
//    if (year % 400 == 0) {
//       printf("%d is a leap year.\n", year);
//    }
//    // not a leap year if divisible by 100
//    // but not divisible by 400
//    else if (year % 100 == 0) {
//       printf("%d is not a leap year.\n", year);
//    }
//    // leap year if not divisible by 100
//    // but divisible by 4
//    else if (year % 4 == 0) {
//       printf("%d is a leap year.\n", year);
//    }
//    // all other years are not leap years
//    else {
//       printf("%d is not a leap year.\n", year);
//    }
// }

// int main()
// {
//     int num = 0;

//     do
//     {
//         scanf("%d", &num);
//     } while (num <= 100000 || num >= 999999);

//     int sixthDigit = num % 10;
//     num /= 10;
//     int fifthDigit = num % 10;
//     num /= 100;
//     int thirdDigit = num % 10;
//     num /= 100;
//     int firstDigit = num;
    
//     int year = 0;
//     year = (firstDigit * 1000) + (thirdDigit * 100) + (fifthDigit * 10) + sixthDigit;

//     leapYear(year);
    

//     return 0;
// }