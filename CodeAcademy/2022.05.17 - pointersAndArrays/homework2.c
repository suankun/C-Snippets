/*
 * Write a program that fills an array of 20 items with randomly selected ones
 * whole numbers. To do this, use the rand () function.
 * Enter an integer from the keyboard. Check that the number entered
 * from the keyboard is found in the array. Print the array and answer whether
 * the number is found in the array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

void arrayInit(int *arr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 99;
    }
}

void checkForTheNumber(int *arr, int num) {
    bool isFound = false;
    for (size_t i = 0; i < SIZE; i++)
    {
        if (*(arr+i) == num)
            isFound = true;
    }
    isFound == true ?   printf("Yes, the number %d is in the array\n", num) :
                        printf("No, the number %d is in NOT in the array\n", num);
}

void printArray(int *arr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // array initialization
    int arr[SIZE] = {0};
    arrayInit(arr);

    // user input the searched number
    int num = 0;
    printf("Enter the searched num: ");
    scanf("%d", &num);

    // check if the number is in the array
    checkForTheNumber(arr, num);

    // array print
    printArray(arr);
    
    return 0;
}
