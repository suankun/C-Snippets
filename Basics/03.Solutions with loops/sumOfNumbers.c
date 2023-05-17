/*
 * Program that receives a "num" from the user
 * and should print the sum of all integers
 * from 1 up to "num".
 */

#include <stdio.h>

int main()
{
    int num, sum;
    int i = 1;
    
    /*user input*/
    printf("Enter a num: ");
    scanf("%d", &num);
    
    /*printing the sum using for loop
    for(i = 1; i <= num; i++)
    {
    	sum += i;
    }*/
    /*printing the sum using while loop*/
    while(i <= num)
    {
    	sum += i;
    	i++;
	}
    
    printf("%d", sum);
    
    return 0;
}