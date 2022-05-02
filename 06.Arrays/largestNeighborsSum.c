/*
 * Function that should calculate and print the Largest Sum of 
 * two Adjacent Element (Neighbors) in Array.
 * Example 1: 1, 4, 3, 7, 1 --> 10
 * Example 2: 5, 7, 1, 5, 2 --> 12
 */

#include <stdio.h>

int main()
{
    /*Declare and initialize the array and the variables.*/
    int arr[5] = {1, 4, 3, 7, 1};
    int i;
    int maxSum = arr[0] + arr[1];

    /*Using for loop to iterate through the array.*/
    for(i = 0; i < 4; i++)
    {
        /*
         * Compare the 2 neighbours elements and rewrite the maxSum
         * if the sum is bigger than the current max sum. 
         */
        if(maxSum < arr[i] + arr[i + 1])
            maxSum = arr[i] + arr[i + 1];
    }
    
    /*Print the result.*/
    printf("The Largest Sum of two Adjacent in this Array is: %d\n", maxSum);

    return 0;
}