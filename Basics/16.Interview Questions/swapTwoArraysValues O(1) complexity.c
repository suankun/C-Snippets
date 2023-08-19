#include <stdio.h>
#include <stdlib.h>

// Recieve two arrays of the same size
// Swap between their values one-by-one --> O(n)

#define SIZE 5

void swap(int *val1, int *val2) {
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swapArrayON(int *arr1, int *arr2) {
    int i;
    for (i=0; i<SIZE; i++) swap(&arr1[i], &arr2[i]);
}

void swapArrayO1(void **ptr1, void **ptr2) {
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArr(int *arr) {
    int i;
    for (i=0; i<SIZE; i++) printf("%d", arr[i]);
    printf("\n");
}

int *generateArray(int size) {
    int i;
    int *arr;
    arr = (int)malloc(size * sizeof(int));
    for (i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main() {
    int sizeArr1, sizeArr2;
    int *Arr1, *Arr2;

    printf("Enter size for Array1: ");
    scanf("%d", &sizeArr1);
    printf("Enter size for Array2: ");
    scanf("%d", &sizeArr2);

    Arr1 = generateArray(sizeArr1);
    Arr2 = generateArray(sizeArr2);

    swapArrayO1(&Arr1, &Arr2);
    
    return 0;
}