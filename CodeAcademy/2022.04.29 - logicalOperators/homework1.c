/*
 * Problem 1: Write a program that reads an integer six-digit number,
 * separates from it the digits of positions 1,3,5 and 6 
 * and with these digits forms a new one
 * a four-digit number. If we consider this new number as
 * year, the program must determine whether this year is high or not.
 */

#include <stdio.h>

int readUserInput() {
    int num = 0;
    do
    {
        scanf("%d", &num);
    } while (num <= 100000 || num >= 999999);
    return num;
}

int calcYear(int num) {
    int sixthDigit = num % 10;
    num /= 10;
    int fifthDigit = num % 10;
    num /= 100;
    int thirdDigit = num % 10;
    num /= 100;
    int firstDigit = num;

    int year = (firstDigit * 1000) + (thirdDigit * 100) + (fifthDigit * 10) + sixthDigit;
    return year;
}

void leapYear(int year) {

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.\n", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.\n", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.\n", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.\n", year);
   }
}

int main()
{
    // read 6 digit number from the user input
    int num = readUserInput();

    // create year from the input 
    int year = calcYear(num);
    
    // check if the year is leap
    leapYear(year);
    
    return 0;
}