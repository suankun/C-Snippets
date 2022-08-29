// Напишете програма, която сортира масив, въведен от клавиатурата,
// използвайки указатели. За целта използвайте метода на мехурчето,
// Bubble sort

#include <stdio.h>

#define SIZE 10

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a[SIZE] = {10, 22, 3, 56, 4, 56, 6, 7, 23, 1};
    int i, j;

    int number = SIZE;

// while (number > 1)
// {
//     for (i = 0; i < number - 1; i++)
//     {
//         if(*(a + i) > *(a + i + 1))
//         {
//             swap(a + i, a + i + 1);
//         }
//     }
//     number--;
// }

    for (j = SIZE; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if(*(a + i) > *(a + i + 1))
            {
                swap(a + i, a + i + 1);
            }
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}