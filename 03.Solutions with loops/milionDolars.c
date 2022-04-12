/*
 * Program that calcuate how much money
 * we can gather if we receive 1 cent and
 * doubled the amount every day for 30 days.
 */

#include <stdio.h>

int main()
{
    int n, i;
    float finalAmount = 0.01;
    n = 30;
    
    /*calculating the amount for 30 days using for loop*/
    for(i = 0; i < n; i++)
    {
    	printf("Day %d: Amount %.2f\n", i, finalAmount);
		finalAmount *= 2;
    }
    
    /*printing the result*/
    printf("Day %d: Amount %.2f\n", i, finalAmount);
    
    return 0;
}