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
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}