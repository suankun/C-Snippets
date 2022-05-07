/*
 * Write a program that initializes a string
 * with your First and Last name and print them.
 */

#include <stdio.h>

int main()
{
    char fullName[] = "Edmont Budakyan";
    int i = 0;

    while(fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }
    printf("\n");

    return 0;
}