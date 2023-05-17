/*
 * Program that checks if a given number
 * is double-digit or triple-digit.
 */

#include <stdio.h>

int main()
{
	int num;
	
	/*user input*/
	printf("Enter the double-digit or triple-digit number: ");
	scanf("%d", &num);
	
	/*logic to check if the number is double or triple-digit number*/
	if(num >= 10 && num <=99)
	{
		printf("Double-digit");
	}
	else if (num >= 100 && num <= 999)
	{
		printf("Triple-digit");
	}
	else
	{
		printf("Neither double/triple");
	}
	
	return 0;
}