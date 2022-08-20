/*
 * Write a macro with one parameter that prints
 * message, only with DEBUG macro defined. If DEBUG
 * it is not defined, it does not print anything
 */

#include <stdio.h>

// If DEBUG is defined print "Defined!". Defined DEBUG 1, not defined DEBUG 0
#define DEBUG 0

int main()
{
    #if DEBUG
        printf("Defined!\n");
    #endif

    return 0;
}