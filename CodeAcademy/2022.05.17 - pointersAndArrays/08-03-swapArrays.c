#include <stdio.h>

#define SIZE 3

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// int main()
// {
//     int a = 3, b = 4;

//     swap(&a, &b);

//     printf("a is %d\n", a);
//     printf("b is %d\n", b);

//     return 0;
// }

int main()
{
    int a[SIZE] = {1, 2, 3};
    int b[SIZE] = {10, 20, 30};
    int c[SIZE];
    int *ptr_a = a;
    int *ptr_b = b;
    int *ptr_c = c;

    int i;

    printf("Initial values: \n");
    // Print values
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(b + i));
    }

    printf("\n");
    printf("Swap values: \n");
    
    // for (i = 0; i < SIZE; i++)
    // {
    //     int temp;
    //     temp = *(a + i);
    //     *(a + i) = *(b + i);
    //     *(b + i) = temp;
    // }

    for (i = 0; i < SIZE; i++)
    {
        swap(a + i, b + i);
    }

    // Print values
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(b + i));
    }
    
    printf("\n");

    return 0;
}


// int main()
// {
//     int arr[] = {2, 4, 6};
//     int arr1[] = {3, 5, 7};
//     int *ptr = arr;
//     int *ptr1 = arr1;
//     int temp = 0;
//     for (size_t i = 0; i < 3; i++)
//     {
//         temp = *(arr+i);
//         *(arr+i) = *(arr1+i);
//         *(arr1+i) = temp;
//     }

//     ptr = arr;

//     for (size_t i = 0; i < 3; i++)
//     {
//         printf("%d ", *ptr);
//         ptr++;
//     }
//     printf("\n");

//     for (size_t i = 0; i < 3; i++)
//     {
//         printf("%d ", *ptr1);
//         ptr1++;
//     }
//     printf("\n");

//     return 0;
// }
