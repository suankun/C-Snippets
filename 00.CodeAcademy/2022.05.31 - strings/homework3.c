/*
 * Write a C program to compare two strings using loop character by character
 * without using the built-in library function strcmp()
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "abcd", str2[100] = "abc";
    char *pStr1 = str1;
	char *pStr2 = str2;
	int isEqual = 1;

	// Comparison of the strings
	while (*pStr1 != '\0' || *pStr2 != '\0')
	{
		if (*pStr1 == *pStr2)
		{
            pStr1++;
			pStr2++;
        }
 
        // If the strings are not equal
        else if ((*pStr1 == '\0' && *pStr2 != '\0')
                 || (*pStr1 != '\0' && *pStr2 == '\0')
                 || *pStr1 != *pStr2)
		{
            isEqual = 0;
            printf("Strings are NOT EQUAL!\n");
            break;
        }
    }
 
    // If the strings are equal
    if (isEqual == 1)
	{
        printf("Strings are EQUAL!\n");
    }
  
    return 0;
}