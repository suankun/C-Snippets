#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int *ptr = arr;
    int i = 0;

    printf("Enter %d array elements: ", SIZE);

    // while (ptr < &arr[SIZE])
    // {
    //     scanf("%d", ptr++);
    // }
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", ptr++);
    }

    ptr = arr;

    printf("Elements in array are: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("Element %d = %d\n", i, *(ptr + i));
    }
    
    return 0;
}