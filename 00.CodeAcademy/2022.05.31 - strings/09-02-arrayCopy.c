// 2.Напишете програма, която копира един масив в друг, използвайки указатели.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void arrayCopy(int *pArr, int *pArr1) {
    for (size_t i = 0; i < SIZE; i++)
    {
        *(pArr+i) = *(pArr1+i);
    }
    
}

void arrayPrint(int *pArr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *(pArr+i));
    }
    printf("\n");
}

int main()
{
    // initialization
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int arr1[SIZE] = {6, 7, 8, 9, 10};
    int *pArr = arr;
    int *pArr1 = arr1;

    // copy arr1 in arr
    arrayCopy(pArr, pArr1);

    // print array
    arrayPrint(pArr);

    // free memory
    free(pArr);
    free(pArr1);

    return(0);
}
