//
// Created by x on 27.06.22.
//
#include <time.h>
#include "func.h"
/*
 * 20. Да се напише функция, която зависи от един двумерен масив и
броят на неговите редове и колони и транспонира този масив, като
транспонираният масив се връща кото стойност на функцията.
Действието транспониране на една матрица, означава първият ред да
стане първи стълб вторият ред да стане втори стълб и т.н.
Или казано с други думи редовете стават колони, а колоните стават
редове.
 *
 */

void Exercise20()
{

    int matrixM = 0;
    printf("Enter the size of the matrix M:");
    scanf("%d", &matrixM);

    int** matrix = malloc(matrixM* sizeof(int*));
    for(int i = 0; i< matrixM; i++){
        *(matrix+i) = malloc(matrixM* sizeof(int));
    }

    initMatrix(matrix, matrixM,matrixM);
    printMatrix(matrix, matrixM, matrixM);
    printf("\n");
    transpondMatrix(matrix, &matrixM, &matrixM);

    for(int i = 0; i< matrixM; i++){
        free(*(matrix+i));
        *(matrix+i) = NULL;
    }

    free(matrix);
    matrix = NULL;
}

void transpondMatrix(int** arr, int* row, int* col){

    if(arr == NULL)
        exit(0);
    int** matrix_c = malloc(*row*sizeof(int*));
    for(int i = 0; i< *row; i++){
        *(matrix_c+i) = (int*)malloc(*col * sizeof(int));
    }

    for(int i = 0; i < *row; i++){
        for(int j = 0; j < *col; j++){
            *(*(matrix_c+j)+i) = *(*(arr+i)+j);
        }
    }
    printMatrix(matrix_c, *row, *col);

    for(int i = 0; i< *row; i++){
        free(*(matrix_c+i));
        *(matrix_c+i) = NULL;
    }

    free(matrix_c);
    matrix_c = NULL;
}

void initMatrix(int **arr, int m, int n){

    srand(time(NULL));

    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++)
            *(*(arr+row) + col) = rand()%100;
    }
}
void printMatrix(int **arr, int m, int n){

    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++)
            printf("%d\t", *(*(arr+row) + col));
        printf("\n");
    }
}