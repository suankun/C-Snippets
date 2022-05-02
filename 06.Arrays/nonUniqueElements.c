/*
 * Count a total values that are "not unique"
 * in a specific array.
 */

#include <stdio.h> 

int main()
{
    /*Declare and initialize the variables*/
    int arr[10];
    int notUniqueCount = 0;
    int i, j;
    int foundDuplicate = 0;
    /*User input the values of the array.*/
    for(i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    /*Checking for "not unique" elements using nested for loops.*/
    for(i = 0; i < 10; i++)
    {
        foundDuplicate = 0;
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                foundDuplicate = 1;
                break;
            }
                
        }
        /*If find duplicated value, print the value and increment notUniqueCount.*/
        if(foundDuplicate == 1)
            break;
        else
            /*Working with the right side.*/
            for(j = i + 1; j < 10; j++)
            {
                if(arr[i] == arr[j])
                {
                    printf("Non-unique value: %d\n", arr[i]);
                    notUniqueCount++;
                    break;
                }
            }
    }
    /*Print the result*/
    printf("Total 'not unique' values: %d\n", notUniqueCount);

    return 0;  
}