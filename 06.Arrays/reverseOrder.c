/*
 * Display array values in reverse order.
 */

#include <stdio.h>

int main()
{
    int pullUpsArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    /*Itterationg through the array*/
    for(i = 9; i >= 0; i--)
    {
        printf("Number of pull ups: %d\n", pullUpsArr[i]);
    }
    
    return 0;
}