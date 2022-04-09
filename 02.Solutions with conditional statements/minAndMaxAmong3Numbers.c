/*
 * Program that gets three numbers and 
 * find out the maximum and the minimum
 * between them.
 */

#include <stdio.h>

int main()
{
	int a, b, c;
	/*defining variables to hold the Min and Max values*/
	int min, max;
	
	/*user input*/
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	
	/*initial assumption for Min and Max values*/
	min = a;
	max = b;
	
	/*checking which number is greater and printing the result*/
	if(a > b)
	{
		max = a;
		min = b;
	}
	if(max < c)
		max = c;
	if(min > c)
		min = c;
		
	/*printing the result*/
	printf("Maximum number is: %d\n", max);
	printf("Minimum number is: %d\n", min);
	
	return 0;
}