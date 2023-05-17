// Напишете програма, която приема 10 цели числа от клавиатурата, запазва ги в
// масив и ги принтира в обратен ред.

#include <stdio.h>

#define SIZE 10

int main() {
    // arr definition and pointer initialization
    int arr[SIZE] = {0};
    int *p = arr;

    // initialize the array
    int num = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", &num);
        *(p+i) = num;
    }
    
    // printing array in reverse order
    for (size_t j = 0; j < SIZE; j++)
    {
        printf("%d ", *(p + SIZE - j - 1));
    }
    printf("\n");

    return 0;
}