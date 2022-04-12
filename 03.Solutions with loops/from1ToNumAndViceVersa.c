/*
 * Program that receives a "num" from the user
 * and should print all the integers from
 * 1 up to "num" and vice versa.
 * For example 5 -> 1, 2, 3, 4, 5
 *                  5, 4, 3, 2, 1
 */

#include <stdio.h>

int main()
{
    int num, i;
    
    /*user input*/
    printf("Enter a num: ");
    scanf("%d", &num);
    
    /*printing the result using for loop*/
    for(i = 1; i <= num; i++)
    {
    	printf("%d ", i);
    }
    printf("\n");
    for(i = num; i >= 1; i--)
    {
    	printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}