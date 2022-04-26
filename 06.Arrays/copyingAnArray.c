/*
 * Function that initializes an Array with 3 elements,
 * which represent the date (day, month, year). The Function
 * should create a new array and copy the data from
 * the original array.
 */

#include <stdio.h>

#define SIZE 3

int main()
{
    int date[SIZE] = {1, 2, 2000};
    int dateCopy[SIZE];
    int i;
    
    for(i = 0; i < SIZE; i++)
    {
        dateCopy[i] = date[i];
    }
    
    for(i = 0; i < SIZE; i++)
    {
        printf("original date [%d] = %d\n", i, date[i]);
        printf("copied date [%d] = %d\n", i, dateCopy[i]);
    }
    
    return 0;
}