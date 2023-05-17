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