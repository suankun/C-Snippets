/*
 * Make four functions and call the desired function with a pointer to a function,
 * respectively the command line character (+, -, *, /).
 */

#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMultiplication(int nA, int nB) { return (nA * nB);}
int fnDivision(int nA, int nB) { return (nA / nB);}

int (*pfCalc) (int, int) = NULL;

int main()
{
	char op;
	printf("Enter operatior (+, -, *, /): ");
	scanf("%c",&op);

	int a = 8;
	int b = 4;

	// if (op == '+')
	// {
	// 	pfCalc = fnPlus;
	// }
	// else if (op == '-')
	// {
	// 	pfCalc = fnMinus;
	// }
	// else if (op == '*')
	// {
	// 	pfCalc = fnMultiplication;
	// }
	// else if (op == '/')
	// {
	// 	pfCalc = fnDivision;
	// }

	switch (op)
	{
	case '+':
		pfCalc = fnPlus;
		break;
	case '-':
		pfCalc = fnMinus;
		break;
	case '*':
		pfCalc = fnMultiplication;
		break;
	case '/':
		pfCalc = fnDivision;
		break;
	}

	printf("%d", pfCalc(a, b));
	printf("\n");

	return 0;
}