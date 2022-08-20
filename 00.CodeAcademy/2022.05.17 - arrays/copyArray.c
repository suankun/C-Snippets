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