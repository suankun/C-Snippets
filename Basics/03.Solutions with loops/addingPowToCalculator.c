/*
 * Program that receive as input two
 * values. Number and power. Should 
 * calculate the result and print it.
 * (Without using math library!)
 */

#include <stdio.h>

int main()
{
	int num, pow;
	int res = 1;
	
	/*user input*/
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &pow);

	/*printing the result using while loop*/
	while(pow > 0)
	{
		res *= num;
		pow--;
	}
	
	printf("%d\n", res);
	
	return 0;
}