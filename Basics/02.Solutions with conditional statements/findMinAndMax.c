/*
 * Program that gets two floating-point 
 * numbers and prints: maximum and minimum.
 */

#include <stdio.h>

int main()
{
	float a, b;
	
	/*user input*/
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	
	/*checking which number is greater and printing the result*/
	if(a > b)
	{
		printf("Maximum: %.2f\n", a);
		printf("Minimum: %.2f\n", b);	
	}
	else
	{
		printf("Maximum: %.2f\n", b);
		printf("Minimum: %.2f\n", a);	
	}
	
	return 0;
}