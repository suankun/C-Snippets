/* Една крайна редица от цели числа се нарича зигзаг, ако всеки елемент на редицата (без
първия и последния) е или по-голям от двата му съседа или по-малък от двата съседни
елемента. Да се напише функция, която по зададен масив от цели числа, определя дали
редицата, образувана от тези числа е зигзаг. */

#include <stdbool.h>
#include <stdio.h>

// void zigzag(int* n, int size)
// {
//     int i = 0;
//     int count = 0;

//     for (i = 1; i < size - 1; i++)
//     {
//         if (n[i] < n[i-1] && n[i] < n[i+1])
//         {
//             count += 1;
//         } else if (n[i] > n[i-1] && n[i] > n[i+1])
//         {
//             count += 1;
//         }
//     }

//     if (count == size-2)
//     {
//         printf ("Yes\n");
//     } else
//     {
//         printf ("No\n");
//     }
// }

bool isZigZag(int *arr, int size)
{
    int i = 0;
    for (i = 1; i < size - 1; i++)
    {
        if ((arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) || 
        (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]))
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    int size;

    printf ("Enter the size of the arrays: ");
    scanf ("%d", &size);

    int numbers[size];

    printf ("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf ("%d", &numbers[i]);
    }

    // zigzag(numbers, size);

    printf("Is the array 'zig zag' type: %s\n", isZigZag(numbers, size) ? "true" : "false");

    return 0;
}