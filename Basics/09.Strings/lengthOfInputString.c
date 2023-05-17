/*
 * 1. Write a function that takes a string and return its length.
 * 2. Write a program that:
 * a) reads a string from the user.
 * b) calls the function at (1) to find the length of the string.
 * c) prints the length on the screen.
 */

#include <stdio.h>

#define SIZE 20

int strlen(char *str)
{
    int i = 0;
    int length = 0;
    while (str[i] != '\0')
    {
        i++;
        length++;
    }
    
    return length;
}

int main()
{
    int stringLength;
    char testStr[SIZE];

    printf("Enter a string: ");
    gets(testStr);

    stringLength = strlen(testStr);

    printf("The length of the string '%s' is %d\n", testStr, stringLength);

    return 0;
}