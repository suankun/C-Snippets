/*
 * Program that receives an integer "n"
 * and should print a Pyramid of Numbers
 * with the following pattern:
 * n = 3;
 *   1
 *  2 3
 * 4 5 6
 */

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int currentValue = 1;
    int blankSpaces;
    
    /*user input*/
    printf("Enter a n: ");
    scanf("%d", &n);
    
    /*setting blank spaces*/
    blankSpaces = n - 1;
    
    /*printing a Pyramid of Numbers using for loop*/
    for(i = 1; i <= n ; i++)
	{
		/*printing black spaces in front of the rows*/
		for(k = blankSpaces; k >= 1; k--)
		{
			printf(" ");
		}
		/*printing the rows*/
		for(j = 1; j <= i; j++)
		{
			printf("%d ", currentValue);
			currentValue += 1;
		}
		
		/*printing new row*/
		printf("\n");
		blankSpaces--;
	}
	    
    return 0;
}