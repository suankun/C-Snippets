/*
 * Program that receive an integer and
 * found our if the number is even or odd.
 */

#include <stdio.h>

int main()
{
	int a;
	
	/*user input*/
	printf("Enter the number: ");
	scanf("%d", &a);
	
	/*checking if the number is even or odd*/
	if(a % 2 == 0)
		printf("The number %d is even.", a);
	else
		printf("The number %d is odd.", a);
	
	return 0;
}