/*
 * Write the function void sort_arr (void * A, int n, int dir, ftype fp),
 * where A is an ordinary array of integers,
 * n - the size of the array,
 * dir - the direction in which the array should be sorted,
 * ftype - a pointer to a function that accepts an array, its size and in which direction to be
 * sorted input array.
 * ftype must sort the array in ascending or descending order, depending on the third
 * function parameter.
 * Print the source and result arrays.
 */

#include <stdio.h>
#include <stdlib.h>

void printArr(int *, int);
void readArr(int *, int);
void bubbleSort(int *, int, int);
void sort_arr(void *, int, int, void (*f)(int *, int, int));

int main()
{
	int size;
	int direction;
	printf("Enter the size of the array: \n");
	scanf("%d", &size);

	int array[size];
	void *pArr = array;

	printf("Enter 0 for ascending order and 1 for descending order:\n");
	scanf("%d", &direction);

	sort_arr(pArr, size, direction, bubbleSort);
	printf("\n");

	return 0;
}

void printArr(int *a, int n)
{
	int i;
	printf("Values in array are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void readArr(int *a, int n)
{
	int i;
	printf("Enter values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void bubbleSort(int *A, int n, int dir)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (dir == 0)
			{
				if (A[j] > A[j + 1])
				{
					int tmp = A[j];
					A[j] = A[j+1];
					A[j+1] = tmp;
				}
			}
			else if (dir == 1)
			{
				if (A[j] < A[j + 1])
				{
					int tmp = A[j];
					A[j] = A[j+1];
					A[j+1] = tmp;
				}
			}
			else
			{
				printf("The direction is not correct!");
			}
		}
	}
}

void sort_arr(void *N, int n, int dir, void (*f)(int *, int, int))
{
	N = (int *) malloc(n * sizeof(int));
	readArr(N, n);
	printArr(N, n);
	printf("\n");
	(*f)(N, n, dir);
	printArr(N, n);
}