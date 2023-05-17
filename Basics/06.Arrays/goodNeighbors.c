/*
 * Work neighbors!
 * Function that creates an array of Integers.
 * The function should check and print if the array has at least
 * one element with "good neighbors".
 * - an element with "good neighbors" has a value that equals
 * to the multiplication of both its neighbors (right, left).
 * For example:
 * [1, 3, 2, 6, 3] --> array has a "good neighbors"
 * [4, 4, 7, 4, 9] --> array doesn't have a "good neighbors"
 */

#include <stdio.h>

#define SIZE 5

int main()
{
    int myArr[SIZE];
    int i;
    /*Creating a flag. Assumption - Array doesn't have a "Good Neighbors"*/
    int hasGoodNeighbors = 0;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &myArr[i]);
    }

    for(i = 1; i < SIZE; i++)
    {
        if(myArr[i] == myArr[i - 1] * myArr[i + 1])
        {
            printf("This Array has Good Neighbors!!! \n");
            /*Setting the flag that array has a "Good Neighbors"*/
            hasGoodNeighbors = 1;
            break;
        }
    }
    
    if(hasGoodNeighbors == 0)
        printf("This array doesn't have any Good Neighbors!\n");
    
    return 0;
}