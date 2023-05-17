/*
 * Program that receives an integer value
 * and prints its absolute value.
 */

#include <stdio.h>

int main()
{
	int num;
	
	/*user input*/
	printf("Enter the integer number: ");
	scanf("%d", &num);
	
	/*logic to return an absolute value*/
	if(num >= 0)
	{
		printf("%d", num);
	}
	else
	{
		printf("%d", num * -1);
	}
	
	return 0;
}