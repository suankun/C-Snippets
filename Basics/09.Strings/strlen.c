/*
 * strlen
 * Function that receives a string.
 * Find out and return the length of the string.
 */

#include <stdio.h>

int strlen(char *str);

int main()
{
    
    return 0;
}

int strlen(char *str)
{
    int i;
    while (str[i] != "\0")
        i++;
    
    return i;
}