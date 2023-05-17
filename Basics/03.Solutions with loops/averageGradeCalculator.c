/*
 * Program that calculates average grade.
 * The program receives grades until user
 * input -1 and calculates the averige grade.
 */

#include <stdio.h>

int main()
{
	int grades;
	int res = 0;
	int counter = 0;

	/*user input*/
	printf("Enter the grade or -1 for exit: ");
	scanf("%d", &grades);

	/*printing the result using while loop*/
	while(grades != -1)
	{
		res += grades;
		counter++;
		
		/*user input*/
		printf("Enter the grade or -1 for exit: ");
		scanf("%d", &grades);
	}
	
	/*printing the result*/
	printf("You have entered %d grades!\n", counter);
	printf("Your AVERAGE GRADE is %.2f\n", (float)res / counter);
	
	return 0;
}