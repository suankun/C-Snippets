/*
 * Program that receive an integer
 * and calculate and print: x power of 2, 4, 6 and 8.
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	int x2, x4, x6, x8;
	
	/*user input*/
	printf("Enter the number X: ");
	scanf("%d", &x);
	
	/*calculating the result*/
	x2 = pow(x, 2);
	x4 = pow(x, 4);
	x6 = pow(x, 6);
	x8 = pow(x, 8);
	
	/*printing the result*/
	printf("The number X power of 2, 4, 6 and 8: %d, %d, %d, %d", x2, x4, x6, x8);
	
	return 0;
}