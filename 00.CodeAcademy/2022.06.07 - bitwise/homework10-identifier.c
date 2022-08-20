/*
 * Write a macro that makes identifier of string.
 */

#include <stdio.h>

#define STRINGNAME strName

int main()
{
    char STRINGNAME[] = "Hello ,world!";
    printf("%s\n", strName);

    return 0;
}