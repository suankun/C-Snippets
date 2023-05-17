/*
 * Program that receives a "num" from
 * the user and should calculate and
 * print the SUM of all the numbers from 1
 * up to "num" that can be divided by 3 and
 * by 5.
 */

#include <stdio.h>

int main()
{
    int i; 
	int num, sum = 0;
    
    /*user input*/
    printf("Enter a num: ");
    scanf("%d", &num);
    
    /*using for loop to itterate through all nums*/
    printf("Trivial solution\n");
    for(i = 1; i <= num; i++)
    {
    	/*checkint if the current i/num can be divided by 3 and by 5*/
    	if(i % 3 == 0 && i % 5 == 0)
    	{
    		printf("%d can be divided by both 3 and 5\n", i);
    		/*sum += i;*/
		}
	}
	
	printf("\nOptimal solution\n");
	for(i = 15; i <= num; i = i + 15)
	{
		printf("%d can be divided by both 3 and 5\n", i);
    	sum += i;
	}
	
	/*printing the result*/
	printf("The sum of numbers that can be divided by 3 and by 5 is %d\n", sum);
	    
    return 0;
}