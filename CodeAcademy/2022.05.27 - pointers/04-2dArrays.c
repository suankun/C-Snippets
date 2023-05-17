// Напишете програма, която прочита стойности в двумерен масив 3x4
// с помощта на функция.
// Разменят се първия и втория ред на масива.
// След това стойностите на масива се извеждат
// като се използва друга функция

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

// #include <stdio.h>
// #include <stdlib.h>

// #define ROL 3
// #define COL 4

// // int arrayInit(int arr[][COL]) {
// // 	for (size_t i = 0; i < ROL; i++)
// // 	{
// // 		for (size_t j = 0; j < COL; j++)
// // 		{
// // 			arr[i][j] = rand() % 10;
// // 		}
// // 	}

// // 	return **arr;
// // }

// void arrayPrint(int arr[][COL]) {
// 	for (size_t i = 0; i < ROL; i++)
// 	{
// 		for (size_t j = 0; j < COL; j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	printf("\n");
// }

// void changeRols(int arr[][COL]) {
// 	int tempArr[COL] = {0};
// 	for (size_t i = 0; i < COL; i++)
// 	{
// 		tempArr[i] = arr[0][i];
// 		arr[0][i] = arr[1][i];
// 		arr[1][i] = tempArr[i];
// 	}
// }

// int main()
// {
// 	int arr[ROL][COL] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};
// 	arrayPrint(arr);
// 	changeRols(arr);
// 	arrayPrint(arr);

// 	return 0;
// }