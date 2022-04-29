/*
 * Palindrome!!!
 * Write a program that checks and prints if a given array
 * is a palindrome or not.
 * Examples:
 * [1, 3, 2, 3, 1] --> PALINDROME
 * [1, 2, 3, 3, 2, 1] --> PALINDROME
 * [1, 4, 6, 2] --> NOT A PALINDROME
 */

#include <stdio.h>

#define SIZE 5

int main()
{
    int i;
    /*Initializing a flag assuming that the array is a Palindrome.*/
    int flag = 1;
    int arr[SIZE] = {1, 3, 2, 3, 1};

    /*Loops through the half of the elements.*/
    for(i = 0; i < SIZE/2; i++)
    {
        /*Check if the element of the left does not equal to the element of the right.*/
        if(arr[i] != arr[SIZE - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    /*Check if the array is a palindrome and print the message.*/
    if(flag == 1)
        printf("The array is a Palindrome!\n");
    else if(flag == 0)
        printf("The array is not a Palindrome!\n");

    return 0;
}