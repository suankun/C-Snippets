// 4.Напишете програма, която обръща местата на елементите в един масив, използвайки указатели.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void changePosOfArray(int *pArr) {
    int temp = 0;
    for (size_t i = 0; i < SIZE/2; i++)
    {
        temp = *(pArr+i);
        *(pArr+i) = *(pArr + SIZE - i - 1);
        *(pArr + SIZE - i - 1) = temp;
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
    int *pArr = arr;

    // change indices
    changePosOfArray(pArr);

    // print array
    arrayPrint(pArr);

    // free memory
    free(pArr);

    return(0);
}
