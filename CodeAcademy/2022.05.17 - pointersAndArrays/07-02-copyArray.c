#include <stdio.h>

#define SIZE 3
// Copy array from "b" to "a"
int main()
{
    int a[SIZE] = {1, 2, 3};
    int b[SIZE] = {10, 20, 30};
    int *ptr = a;
    int i;
    
    for (i = 0; ptr + i < &a[SIZE]; i++)
    {
        *(a + i) = *(b + i);
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(a + i));
    }
    
    return 0;
}

// int main()
// {
//     int arr[] = {2, 4, 6};
//     int arr1[] = {3, 5, 7};
//     int *ptr = arr;
    
//     for (size_t i = 0; i < 3; i++)
//     {
//         *(arr+i) = *(arr1+i);
//     }

//     ptr = arr;

//     for (size_t i = 0; i < 3; i++)
//     {
//         printf("%d ", *ptr);
//         ptr++;
//     }
//     printf("\n");

//     return 0;
// }
