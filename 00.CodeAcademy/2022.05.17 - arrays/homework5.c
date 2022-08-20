/*
 * Define a one - dimensional array int with 10 elements =
 * {100,90,80,70,60,50,40,30,20,10}.
 * Define a pointer that will point to an array.
 * Access the 3rd element of the array and set it to 5.
 * Access the 4th element and set it to 33.
 * Access the 5th element and reduce it by 7.
 * Access the 7th element and increase it by 10.
 * Access the 10th element and multiply it by 3.
 * Write it down in both possible ways and comment the one of them.
 * Print all elements of the array on the screen.
 */

#include <stdio.h>

int main()
{
    int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int i;
    int *ptr = arr;

    // Changing values direct.
    // arr[2] = 5;
    // arr[3] = 33;
    // arr[4] -= 7;
    // arr[6] += 10;
    // arr[9] *= 3;

    // Changing values using pointer.
    ptr[2] = 5;
    ptr[3] = 33;
    ptr[4] -= 7;
    ptr[6] += 10;
    ptr[9] *= 3;

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", ptr[i]);
    }
    

    printf("\n");

    return 0;
}