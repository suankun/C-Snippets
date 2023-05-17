/*
 * Write a program that prints unique elements of an array of integers,
 * entered from the keyboard. To do this, some of the numbers must be repeated.
 */

#include <stdio.h>

#define SIZE 10

void arrayInit(int *arr) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter a number at index %d: ", i);
		scanf("%d", &arr[i]);  
	}
}

void printUniqueElements(int *arr) {
	int ctr = 0;
	for (int i = 0; i < SIZE; i++)
    {
        ctr = 0;
        for (int j = 0, k = SIZE; j < k + 1; j++)
        {
            // Increment the counter when the search value is duplicate.
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
          printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
	// array declaration
    int arr[SIZE];
    
    // Filling the array with random numbers.
    arrayInit(arr);

    // Print the unique elements in the array.
    printUniqueElements(arr);

    return 0;
}