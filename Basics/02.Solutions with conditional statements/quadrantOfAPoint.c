/*
 * Program that receives a coordinate points
 * in XY system. And should print in which 
 * quadrant the point is.
 */

#include <stdio.h>

int main()
{
	int x, y;
	
	/*user input*/
	printf("Enter the X coordinate: ");
	scanf("%d", &x);
	printf("Enter the Y coordinate: ");
	scanf("%d", &y);
	
	/*defining the quadrant*/
	if(x > 0 && y > 0)
	{
		printf("Quadrant 1");
	}
	else if(x < 0 && y > 0)
	{
		printf("Quadrant 2");
	}
		else if(x < 0 && y < 0)
	{
		printf("Quadrant 3");
	}
		else if(x > 0 && y < 0)
	{
		printf("Quadrant 4");
	}
	
	return 0;
}