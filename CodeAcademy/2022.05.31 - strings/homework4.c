/*
 * Write a program in C to check if a string is a palindrome or not without
 * using a loop.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
     char s1[100], s2[100];  
   
    printf("Enter the string: ");
    scanf("%d", &s1);
    strcpy(s2,s1);
    strrev(s2);
    if (!strcmp(s1,s2))
 	    printf("The string IS a palindrome!\n");
    else
        printf("The string IS NOT a palindrome!\n");
    
    return 0;
}