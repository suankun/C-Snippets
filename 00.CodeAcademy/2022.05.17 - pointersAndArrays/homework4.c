/*
 * Write a program that counts how many times a number occurs in an array
 * of integers. The array must be entered from the keyboard. Print
 * the results.
 */

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, j;
    int temp, num, counter;

    printf("Enter %d numbers: \n", SIZE);
    // User input.
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    // To sort all entered element in ascending order.
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // For counting how many times each number is occur.
    for (i = 0; i < SIZE; i = j)
    {
        num = arr[i];
        counter = 1;
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[j] != num)
            {
                break;
            }
            else
            {
                counter++;
            }
        }
        printf("\nNumber %d - occurs %d times", num, counter);
    }
    printf("\n");

    return 0;
}