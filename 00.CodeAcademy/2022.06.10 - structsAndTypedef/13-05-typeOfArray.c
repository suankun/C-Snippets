// Задача 5. Дефинирайте потребителски тип към масив.
// Инициализирайте масива, изведете на конзолата.

#include <stdio.h>

typedef int arr[10];

int main() {
    arr myArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        printf("%d ", myArr[i]);
    }

    printf("\n");

    return 0;
}

//////////////////////////////////

// typedef int arr[5];

// int main()
// {
//     arr myArr = {4, 9, 6, 2, 8};
//     int i = 0;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d \t", myArr[i]);
//     }
//     printf("\n");

//     arr myArr2 = {7, 1, 8, 2, 3};

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d \t", myArr2[i]);
//     }
//     printf("\n");

//     return 0;
// }