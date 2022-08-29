#include<stdio.h>
#include<stdlib.h>

void readArray(int **a,int n, int m)
{
	printf("Please enter 12 integers: ");
	printf("\n");
	for(int k = 0; k < n; k++)
		for(int l = 0; l < m; l++)
			scanf("%d",&a[k][l]);
}

void printArr(int **a,int n, int m){
	for(int k = 0; k < n; k++)
	{
		for(int l = 0;l < m; l++)
		{
			printf("%d\t", a[k][l]);
		}
		printf("\n");
	}
}

int swapRow(int *x, int *y, int m){
	int row;
	for(row = 0; row < m; row++)
	{
		int tmp = x[row];
		x[row] = y[row];
		y[row] = tmp;
	}
}

int main()
{
	int i, N = 3,M = 4; // N - указател към масиви, М брой масиви
	int **array;
	array = (int **) malloc ( sizeof (int *) * N);

	for(i = 0; i < N; i++)
	{
		array[i] = (int *) malloc(sizeof (int) * M);
	}

	readArray(array, N, M);
	printArr(array, N, M);
	// int maximum = maxElem(array, N, M);
	for(i = 0; i < N; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}
	free(array);
	array = NULL;

	return 0;
}