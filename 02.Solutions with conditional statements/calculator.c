/*
 * Program that makes calculator
 * with switch statment.
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	char mathOperator;
	
	/*user input*/
	printf("Enter the math operator: ");
	scanf("%c", &mathOperator);
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	/*logic for the calculator*/
	switch(mathOperator)
	{
		case '+': printf("%d %c %d = %d", num1, mathOperator, num2, num1 + num2); break;
		case '-': printf("%d %c %d = %d", num1, mathOperator, num2, num1 - num2); break;
		case '*': printf("%d %c %d = %d", num1, mathOperator, num2, num1 * num2); break;
		case '/': 
			if(num1 == 0 || num2 == 0)
				printf("You cannot divide by 0!\n");
			else
				printf("%d %c %d = %d", num1, mathOperator, num2, num1 / num2);
			break;
		case '%':
			if(num1 == 0 || num2 == 0)
				printf("You cannot divide by 0!\n");
			else
				printf("%d %c %d = %d", num1, mathOperator, num2, num1 % num2);
			break;
	}
	
	return 0;
}