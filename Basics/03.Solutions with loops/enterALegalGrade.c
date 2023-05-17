/*
 * Program that recieves as input 
 * a "valid" grade: greater than 0
 * and less than 100.
 */

#include <stdio.h>

int main()
{
	int grade;
	
	/*checking the condition*/
	do
	{
		printf("Enter a grade between 0 and 100: ");
		scanf("%d", &grade);
	} while(grade < 0 || grade > 100);
	
	/*printing the result*/
	printf("Thanks! You've inserted a legit grade of %d\n", grade);
	
	return 0;
}