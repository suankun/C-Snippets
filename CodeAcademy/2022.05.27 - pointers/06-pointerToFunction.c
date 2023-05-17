#include <stdio.h>

double myfunc(double a, int b)
{
	return (a * b);
}
double fnPointerDemo()
{
	double (*ptrfun) (double, int);
	ptrfun = myfunc;
	double dValue = (*ptrfun) (4.5, 3);

	return dValue;
}

int main()
{
	printf("Result = %.2lf", fnPointerDemo());
	printf("\n");

	return 0;
}