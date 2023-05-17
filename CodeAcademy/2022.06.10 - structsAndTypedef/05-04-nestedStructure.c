// Задача 4. Напишете произволна програма, която да демонстрира уменията
// ви да боравите с nested structure

#include <stdio.h>

struct firma
{
    struct people
    {
        char name[20];
        float salary;
        int year;
    } worker;
    char address[30];
    int year;
};

int main()
{
    struct firma myFirm = {{"Angel", 2.500, 28}, "Sofia", 2020};

    printf("%s\n", myFirm.worker.name);

    return 0;
}

//////////////////////////

// struct one {
//     int a;
//     int b;
// };

// struct two {
//     int a;
//     int b;
// };

// struct res {
//     struct one first;
//     struct two second;
// };

// int main() {
//     struct res data;
//     data.first.a = 1;
//     data.first.b = 2;
//     data.second.a = 3;
//     data.second.b = 4;

//     printf("%d, %d, %d, %d\n", data.first.a, data.first.b, data.second.a, data.second.b);

//     return 0;
// }
