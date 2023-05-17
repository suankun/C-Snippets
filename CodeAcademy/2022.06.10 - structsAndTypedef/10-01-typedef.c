// Задача 1. Дефинирайте структура като потребителски тип.Инициализирайте
// членовете на структурата, използвайки новия потребителски тип. Отпечатайте.

#include <stdio.h>

typedef struct
{
    char name[20];
    int id;
} student;

int main()
{
    student list[10];

    int n = 0;
    for (n = 0; n < 3; n++)
    {
        scanf("%s", list[n].name);
        scanf("%d", &list[n].id);
    }

    printf("students: \n");
    for (n = 0; n < 3; n++)
    {
        printf("%d)%d\t", n + 1, list[n].id);
        printf("%s\n", list[n].name);
    }

    return 0;
}

//////////////////////////

// typedef struct {
//     int x;
//     int y;
// } coordinates;

// int main()
// {
//     coordinates one = {2, 4};

//     printf("%d, %d\n", one.x, one.y);

//     return 0;
// }
