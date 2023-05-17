// 1. Напишете програма, която въвежда и принтира елементитe на масив, използвайки указател.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void arrayInit(int *pArr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        *(pArr+i) = i+1;   
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
    // diclaration
    int arr[SIZE] = {0};
    int *pArr = arr;

    // initialization
    arrayInit(pArr);

    // print array
    arrayPrint(pArr);

    // free memory
    free(pArr);

    return(0);
}