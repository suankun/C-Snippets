// Задача 3. Дефинирайте потребителски тип към указател.Създайте променлива,
// насочете указателя към нея, използвайки новия потребителски тип.

#include <stdio.h>

typedef int* int_p;

int main() {
    int num = 9;
    int_p ptr = &num;

    printf("%d\n", *ptr);

    return 0;
}

///////////////////////////

// typedef char* p;

// int main()
// {
//     p a;
//     char name[] = "Ivan";
//     a = name;

//     printf("%s\n", a);

//     return 0;
// }
