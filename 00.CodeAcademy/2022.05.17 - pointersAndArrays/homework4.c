/*
 * Write a program that counts how many times a number occurs in an array
 * of integers. The array must be entered from the keyboard. Print
 * the results.
 */

#include <stdio.h>

#define SIZE 5

void arrayInit(int *arr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sortArray(int *arr) {
    int temp = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = i + 1; j < SIZE; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void checkForNumbersCount(int *arr) {
    int num = 0, counter = 0;
    int i = 0, j = 0;
    for (i = 0; i < SIZE; i = j)
    {
        num = arr[i];
        counter = 1;
        for (j = i+1; j < SIZE; j++)
        {
            if (arr[j] != num)
            {
                break;
            } else {
                counter++;
            }
        }
        printf("Num: %d-%d", num, counter);
        printf("\n");
    }
    printf("\n");
}

int main() {
    // array initialization
    int arr[SIZE] = {0};
    arrayInit(arr);

    // sort the array
    sortArray(arr);

    // check and print for the numbers count
    checkForNumbersCount(arr);
    
    return 0;
}