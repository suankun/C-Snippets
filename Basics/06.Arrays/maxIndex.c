/*
 * Function that initializes an array of digits
 * (of your phone number) and should find the 
 * INDEX of the max value and print the index 
 * to the screen.
 */

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, maxIndex;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter a digit no.%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    maxIndex = 0;
    
    for(i = 1; i < SIZE; i++)
    {
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    
    printf("The index of max digit is: %d \n", maxIndex);

    return 0;
}