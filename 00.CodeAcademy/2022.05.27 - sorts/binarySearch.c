#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *array, int x, int low, int high)
{
	// Repeat until pointers low and hihg meet each other.
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (array[mid] == x)
		{
			return mid;
		}
		if (array[mid] < x)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;

}

int main()
{
	int array[] = {3, 4, 5, 6, 17, 38, 90};
	int n = sizeof(array) / sizeof(array[0]);
	int x = 4;

	int result = binarySearch(array, x, 0, n - 1);

	if (result == -1)
	{
		printf("Not found");
	}
	else
	{
		printf("The number is found at index %d", result);
	}
	printf("\n");

	return 0;
}
