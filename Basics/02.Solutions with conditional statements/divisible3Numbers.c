/*
 * Program that receives 3 integers
 * and should print "Divisible" if in each
 * pair between the 3 numbers there is at
 * least one number that can be divided
 * by the other - without a reminder.
 */

#include <stdio.h>

int main()
{
	int a, b, c;
	
	/*user input*/
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	
	/*logic to determin if there is at least to number divisible without a reminder*/
	if(a == 0 || b == 0 || c == 0)
		printf("Cannot divide by 0!\n");
	else if(a % b == 0 || b % a == 0 || b % c == 0 || c % b == 0 || a % c == 0 || c % a == 0)
		printf("Divisible\n");
	else
		printf("Not divisible\n");
	return 0;
}