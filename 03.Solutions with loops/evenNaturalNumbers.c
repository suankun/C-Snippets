/*
 * Program that receives a "num"
 * from the user and shult print
 * the "num" even numbers (starting
 * from 2).
 * Example -> 5 - 2, 4, 6, 8, 10
 */

#include <stdio.h>

int main()
{
    int num, i;
    i = 2;
    
    /*user input*/
    printf("Enter a num: ");
    scanf("%d", &num);
    
    /*printing sequence using for loop*/
  /*for(i = 1; i <= num ; i++)
	{
		printf("%d ", i * 2);
	}*/
	
	/*printing sequence using while loop*/
	while(num > 0)
	{
		printf("%d ", i);
		i += 2;
		num -= 1;
	}
	    
    return 0;
}