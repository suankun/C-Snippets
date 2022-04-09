/*Changing the values of two variables*/

#include <stdio.h>

int main()
{
	int a, b;
	int temp; /*creating new variable to store the value of a*/
	
	a = 10;
	b = 20;
    /*values before the change*/
	printf("a and b before changing the values: a = %d, b = %d\n", a, b);
	
    /*changint the values*/
	temp = a;
	a = b;
	b = temp;
    /*values after the change*/
	printf("a and b after changing the values: a = %d, b = %d\n", a, b);
	
	return 0;
}