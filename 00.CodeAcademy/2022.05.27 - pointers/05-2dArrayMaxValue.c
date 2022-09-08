#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 4

void readArray(int **a)
{
	for (int k = 0; k < ROW; k++)
		for (int l = 0; l < COL; l++)
			scanf("%d", &a[k][l]);
}

void printArr(int **a)
{
	for (int k = 0; k < ROW; k++)
	{
		for (int l = 0; l < COL; l++)
		{
			printf("%d\t", a[k][l]);
		}
		printf("\n");
	}
}

void * maxElem(int **a)
{
	int * M = (int *) malloc(sizeof(int) * COL);
	int row, col;
	
	for (int row = 0; row < ROW; row++)
	{
		int max = a[0][0];
		for (int col = 0; col < COL; col++)
		{
			if (a[row][col] > max)    
        		max = a[row][col];  
		}
		printf("Maximum value in row %d: %d", row + 1, max);
		printf("\n");
	}
}

int main()
{
	int **array;

	array = (int **)malloc(sizeof(int*) * ROW);

	for (size_t i = 0; i < ROW; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * COL);
	}

	readArray(array);
	printArr(array);
	printf("\n");
	printf("%d", maxElem(array));

	// free the memory
	for (size_t j = 0; j < ROW; j++)
	{
		free(array[j]);
	}
	free(array);

	return 0;
}