#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char charArr[] = "123";
	int number = 2 + atoi(charArr);
	printf("%d\n", number);

	char charArr1[] = "123.34";
	float number1 = 2 + atof(charArr1);
	printf("%f\n", number1);

	return 0;
}