/*
 * Write a program that should rotata left
 * a given array by one position.
 * Example: before [1, 2, 3, 4]
 *          after  [2, 3, 4, 1]
 */

#include <stdio.h> 
/*Solution 1:*/
int main()
{
    /*Declare and initialize the variables*/
    int arr[4] = {1, 2, 3, 4};
    int newArr[4];
    int i;

    for(i = 0; i < 3; i++)
    {
        newArr[i] = arr[i + 1];
    }
    newArr[3] = arr[0];

    /*Print the array.*/
    for(i = 0; i < 4; i++)
    {
        printf("%d ", newArr[i]);
    }
    printf("\n");
    
    return 0;  
}
/*Solution 2:*/
int main()
{
    int i, temp;
    int valuesArr[4] = {1, 2, 3, 4};
    /*Logic to rotate the array.*/
    temp = valuesArr[0];
    for(i = 1; i < 4; i++)
    {
        valuesArr[i - 1] = valuesArr[i];
    }
    valuesArr[3] = temp;
    /*Print the array.*/
    for(i = 0; i < 4; i++)
    {
        printf("%d ", valuesArr[i]);
    }
    printf("\n");

    return 0;
}