/*
 * Write a program that prints unique elements of an array of integers,
 * entered from the keyboard. To do this, some of the numbers must be repeated.
 */

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, j, k;
    int ctr = 0;
    
    // Filling the array with random numbers.
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a number at index %d: ", i);
        scanf("%d", &arr[i]);  
    }

    // Print the unique elements in the array.
    for (i = 0; i < SIZE; i++)
    {
        ctr = 0;
        for (j = 0, k = SIZE; j < k + 1; j++)
        {
            // Increment the counter when the seaarch value is duplicate.
            if (i != j)
            {
		       if (arr[i] == arr[j])
                {
                    ctr++;
                }
            }
        }

        if(ctr == 0)
        {
          printf("%d ",arr[i]);
        }
    }
    printf("\n");

    return 0;
}