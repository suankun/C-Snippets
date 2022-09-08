#include <stdio.h>
#include <stdlib.h>

void add(float nA, float nB){printf("%.2f", (nA + nB));}
void sub(float nA, float nB){printf("%.2f", (nA - nB));}
void mult(float nA, float nB){printf("%.2f", (nA * nB));}
void divi(float nA, float nB){printf("%.2f", (nA / nB));}

int main()
{
	void (*func_ptr[4])(float, float) = {add, sub, mult, divi};
	int choice;
	float num1 = 0, num2 = 0;
	printf("Enter your choice: 0 - sum, 1 - sub, 2 - mult, 3 - div: ");
	scanf("%d", &choice);
	
	printf("Plese enter the first number: ");
	scanf("%f", &num1);
	printf("Plese enter the second number: ");
	scanf("%f", &num2);
	
	func_ptr[choice](num1, num2);

	printf("\n");

	return 0;
}