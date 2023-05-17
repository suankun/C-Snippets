/*
 * Read an array of integers from the keyboard.
 * Copy the entered array to a second array and multiplying the value of
 * each element by 2. Print both arrays.
 */

#include <stdio.h>

#define SIZE 5

void readArrayFromInput(int *arr) {
    for (size_t i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int *arr) {
    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void copyAndMultiplicateByTwo(int *arr, int *arrCopy) {
    for (size_t i = 0; i < SIZE; i++) {
        *(arrCopy+i) = *(arr+i)*2;
    }
}

int main() {

    int arr[5] = {0};
    int arrCopy[5] = {0};
    readArrayFromInput(arr);
    copyAndMultiplicateByTwo(arr, arrCopy);
    printArray(arr);
    printArray(arrCopy);
    
    return 0;
}
