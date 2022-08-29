#include <stdio.h>

int main()
{
	float num1, num2;
	char mathOperator;
	
	printf("Enter the math operator: ");
	scanf("%c", &mathOperator);
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);

	switch(mathOperator)
	{
		case '+': printf("%f %c %f = %.2f\n", num1, mathOperator, num2, num1 + num2); break;
		case '-': printf("%f %c %f = %.2f\n", num1, mathOperator, num2, num1 - num2); break;
		case '*': printf("%f %c %f = %.2f\n", num1, mathOperator, num2, num1 * num2); break;
		case '/': 
			if(num1 == 0 || num2 == 0)
				printf("You cannot divide by 0!\n");
			else
				printf("%f %c %f = %.2f", num1, mathOperator, num2, num1 / num2);
			break;
	}
	
	return 0;
}