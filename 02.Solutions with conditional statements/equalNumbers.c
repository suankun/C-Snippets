/*
 * Program that checks if 2 numbers
 * (received from the user) are the same.
 */

#include <stdio.h>

int main()
{
	int a, b;
	
	/*user input*/
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	/*checking the numbers for equality*/
	if(a == b)
		printf("True\n");
	else
		printf("False\n");
	
	return 0;
}