#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *reverse_list(const int *array, size_t length) {
    int i = 0;
    int *arr = malloc(sizeof(int) * length);
    for (i = 0; i < length; i++)
    {
        arr[i] = array[i];
    }
    for (i = 0; i < length/2; i++)
    {
        swap(&arr[i], &arr[length - i - 1]);
    }

    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);

    return arr;
}

Alternative solution:
#include <stdlib.h>
#include <stddef.h>

int *reverse_list(const int *array, size_t length) {
  
    int * newArray = malloc(length * sizeof(int));  
    int i;
    for (i = 0; i < length; i++)
      newArray[i] = array[length - 1 - i];
      
    return newArray;
}
