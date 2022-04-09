/*
 * Program that calculates distance
 * between 2 points.
 */

#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2;
	float result;
	
	/*user input*/
	printf("Enter the first coordinates x1 and y1: ");
	scanf("%f %f", &x1, &y1);
	printf("Enter the second coordinates x2 and y2: ");
	scanf("%f %f", &x2, &y2);
	
	/*calculating the distance*/
	result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	
	/*printing the result*/
	printf("The distance between the coordinates is: %.2f", result);
	
	return 0;
}