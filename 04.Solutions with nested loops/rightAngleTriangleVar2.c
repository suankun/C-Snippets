/*
 * Program that receive an integer - "n".
 * Program should print a right-angle triangle.
 * For example for n = 3;
 * 1
 * 22
 * 333
 */

#include <stdio.h>

int main()
{
    int n;
    int i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    /*print a right-angle triangle using nested for loops*/
    for(i = 1; i <= n; i++)
    {
      /*variant with for loop
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        variant with while loop*/
        j = i;
        while(j>0)
        {
        	printf("%d", i);
        	j--;
		}
        printf("\n");
    }
    
    return 0;
}