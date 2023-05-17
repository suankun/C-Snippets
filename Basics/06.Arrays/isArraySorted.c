/*
 * Write a program that creates an Array (of integers).
 * The user is going to specify the values for the array.
 * Check if the array is "Really Sorted", "Sorted" or "Not Sorted".
 * Example 1: [1, 2, 5, 7, 10] --> "Really Sorted"
 * Example 2: [1, 2, 2, 5, 10] --> "Sorted"
 * Example 3: [1, 2, 5, 3, 10] --> "Not Sorted"
 */

#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    /*2 --> Really Sorted, 1 --> Sorted, 0 --> Not Sorted*/
    int flag = 2;
    /*Reading the values of the elements from the user.*/
    for(i = 0; i < 5; i++)
    {
        printf("Please enter value %d of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++)
    {
        /*The element of the left is greather than the element of the right.*/
        if(arr[i] > arr[i + 1])
        {
            /*Not Sorted.*/
            flag = 0;
            break;
        }
        if(arr[i] == arr[i + 1])
        {
            /*Sorted.*/
            flag = 1;
        }

    }

    if(flag == 2)
        printf("The array is Really Sorted!\n");
    else if(flag == 1)
        printf("The array is Sorted!\n");
    else if(flag == 0)
        printf("The array is Not Sorted!\n");

    return 0;
}