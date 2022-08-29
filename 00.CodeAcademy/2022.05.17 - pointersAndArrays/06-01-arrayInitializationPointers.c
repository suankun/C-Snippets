// Напишете програма, която въвежда и принтира елементитe на масив,
// използвайки указател.

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE] = {0};
    int *ptr = arr;
    printf("Enter %d elements: ", SIZE);
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
