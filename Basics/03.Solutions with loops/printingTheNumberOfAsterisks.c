/*
 * Program that gets a "number of asterisks"
 * and should print to the screen the
 * specified number of asterisks.
 */

#include <stdio.h>

int main()
{
	int asterisksNumber;
	
	/*user input*/
	printf("Enter an asterisks number: ");
	scanf("%d", &asterisksNumber);

	/*printing the result using while loop*/
	while(asterisksNumber > 0)
	{
		printf("*");
		asterisksNumber--;
	}
	printf("\n");
	
	return 0;
}