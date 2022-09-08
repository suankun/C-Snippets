// 11. Напишете програма, която сортира масив, въведен от клавиатурата, използвайки указатели.

#include <stdio.h>

#define SIZE 10

// print array
void arrayPrint(int *arr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// swap two numbers
void swap(int *num1, int *num2) {
    int tempInt = 0;
    tempInt = *num1;
    *num1 = *num2;
    *num2 = tempInt;
}

// sort array
void arraySort(int *arr) {
    int tempInt = 0;
    for (size_t i = 0; i < SIZE - 1; i++)
    {
        for (size_t j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    // array init
    int arr[SIZE] = {0};
    printf("Enter %d elements:\n", SIZE);
    size_t i = 0;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // invoke print and swap
    arrayPrint(arr);
    arraySort(arr);
    arrayPrint(arr);
    
    return 0;
}
