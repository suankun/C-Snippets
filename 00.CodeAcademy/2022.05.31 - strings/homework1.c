/*
 * Write a C program to find the length of a string using a loop without
 * use the built-in strlen() library function.
 */

#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "asdasddefwfvasjkwdj";
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
    {
        length++; //Counting the length.
    }
	printf("The length is %d characters.\n", length);

	return(0);
}