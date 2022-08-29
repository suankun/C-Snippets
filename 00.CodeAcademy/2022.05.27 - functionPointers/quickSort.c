#include <stdio.h>

void swap(int *n1, int *n2)
{
	int m = *n1;
	*n1 = *n2;
	*n2 = m;
}

int partition(int arr[], int x, int y)
{
	int pivot = arr[y];
	int i = (x - 1);
	for (int j = x; j < y; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[y]);

	return (i + 1);
}

void quickSort(int arr[], int x, int y)
{
	if (x < y)
	{
		int pi = partition(arr, x, y);
		quickSort(arr, x, pi - 1);
		quickSort(arr, pi + 1, y);
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int values[] = {99, 88, 64, 25, 40, 20, 42};
	int n = sizeof(values) / sizeof(values[0]);
	printf("Given Unsorted Array Values \n");
	printArray(values, n);
	quickSort(values, 0, n - 1);
	printf("Sorting Given Array In The Ascending Order: \n");
	printArray(values, n);

	return 0;
}