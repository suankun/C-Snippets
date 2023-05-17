/*
 * Program that receives an integer
 * and prints its multiplication table.
 */

#include <stdio.h>

int main()
{
    int num, i;
    
    /*user input*/
    printf("Enter a num: ");
    scanf("%d", &num);
    
    /*printing the multiplication table using for loop*/
    for(i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
	    
    return 0;
}