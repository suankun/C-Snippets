/*
 * Part 1: Print all Unique Elements in an Array!
 * Part 2: Count the number of Unique Elements in an Array!
 * Example Array: [1, 2, 3, 4, 5, 1, 2, 3, 6, 7] --> 4, 5, 6, 7 / total 4 numbers.
 */

#include <stdio.h> 

int main()
{
    /*Declaring variables.*/
    int arr[10];
    int uniqueCount = 0;
    int i, j;
    /*User input the values of the array.*/
    for(i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    /*Checking for unique elements using nested for loops.*/
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i == j)
                continue;
            if(arr[i] == arr[j])
                break;
        }
        /*If don't find duplicated value, j will be 10*/
        if(j == 10)
        {
            printf("Unique value: %d\n", arr[i]);
            uniqueCount++;
        }
    }

    printf("Total unique values: %d\n", uniqueCount);

    return 0;  
}