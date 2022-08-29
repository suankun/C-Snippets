// Напишете функция, която по дадени два масива извежда общите им елементи.
// Напишете друга функция, която по дадени двата масива, извежда
// обединението на техните елементи.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

void duplicates(int *arr1, int *arr2);
void addTwoArrays(int *arr1, int *arr2);

int main()
{
    int arr1[SIZE] = {1, 4, 5, 2, 9, 3, 7}; // duplicates 1, 4, 2, 3 
    int arr2[SIZE] = {2, 3, 6, 1, 10, 4, 8};
    duplicates(arr1, arr2);
    addTwoArrays(arr1, arr2);

    return 0;
}

void duplicates(int *arr1, int *arr2)
{
    int i = 0, j = 0;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

void addTwoArrays(int *arr1, int *arr2)
{
    int newSize = 0, i = 0, j = 0;
	newSize = SIZE + SIZE;     //Array Size Declaration
    int newArr[newSize];       //Array Declaration
  	for(i = 0; i < SIZE; i++)
  	{
      	newArr[i] = arr1[i];
  	}
 	for(i = 0, j = SIZE; j < newSize && i < SIZE; i++, j++)
  	{
  		newArr[j] = arr2[i];
  	}
 	printf("Total elements arter merging: %d\n", newSize); 
 	for(i = 0; i < newSize; i++)
  	{
    	printf("%d ",newArr[i]);
  	}
    printf("\n");
}