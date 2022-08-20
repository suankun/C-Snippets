/*
 * Write a C program to connect two strings into one string without using a library
 * strcat() function.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // Two Strings to be concatenated
    char str1[100] = "Hello ", str2[100] = "World!";
  
    // Declare a new String to store the concatenated Strings
    char str3[100];
  
    int i = 0, j = 0;
  
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
  
    // Insert the first string in the new string
	for (i = 0; str1[i] != '\0'; i++, j++)
	{
		str3[j] = str1[i];
	}
  
    // Insert the second string in the new string
    i = 0;
	for (i = 0; str2[i] != '\0'; i++, j++)
	{
		str3[j] = str2[i];
	}
    str3[j] = '\0';
  
    // Print the concatenated string
    printf("Concatenated string: %s\n", str3);
  
    return 0;
}