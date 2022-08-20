/*
 * Write a program that fills an array of 20 items with randomly selected ones
 * whole numbers. To do this, use the rand () function.
 * Enter an integer from the keyboard. Check that the number entered
 * from the keyboard is found in the array. Print the array and answer whether
 * the number is found in the array.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main()
{
    int arr[SIZE];
    int i;
    int check = 0;
    
    // Filling the array with random numbers.
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand();  
    }

    // Receiving an integer from the user.
    printf("Enter a number to check if it is found in the array: ");
    scanf("%d", &check);

    // Print the array.
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    // Checking and print if the number is found in the array.
    for (i = 0; i < SIZE; i++)
    {
        if (*(arr + i) == check)
        {
            printf("%d is found at index %d", *(arr + i), i);
        }
    }

    printf("\n");

    return 0;
}