#include <stdio.h>

int main()
{
	int a, b;
	int temp;
	
	a = 10;
	b = 20;
	printf("a and b before changing the values: a = %d, b = %d\n", a, b);
	
	temp = a;
	a = b;
	b = temp;
	printf("a and b after changing the values: a = %d, b = %d\n", a, b);
	
	return 0;
}