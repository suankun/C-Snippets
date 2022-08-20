#include<stdio.h>
#include<stdlib.h>

void readArray(int **a,int n, int m)
{
	for(int k = 0; k < n; k++)
		for(int l = 0; l  <m; l++)
			scanf("%d", &a[k][l]);
}

void printArr(int **a,int n, int m)
{
	for(int k = 0; k < n; k++)
	{
		for(int l = 0;l < m; l++)
		{
			printf("%d\t", a[k][l]);
		}
		printf("\n");
	}
}

void * maxElem(int **a, int n, int m)
{
	int * M = (int *) malloc(sizeof(int) * m);
	int row, col;
	
	for(int row = 0; row < n; row++)
	{
		int max = a[0][0];
		for(int col = 0;col < m; col++)
		{
			if(a[row][col] > max)    
        	max = a[row][col];  
		}
		printf("Maximum value in row %d: %d", row + 1, max);
		printf("\n");
	}
	
}

int main()
{
	int i, N = 3, M = 4;
	int **array;

	array = (int **) malloc ( sizeof (int *) * N);

	for(i = 0; i < N; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * M);
	}

	readArray(array, N, M);
	printArr(array, N, M);
	printf("\n");
	printf("%d", maxElem(array, N, M));

	return 0;
}