// Задача 9. Дефинирайте структура, в която има член указател към самата
// структура. Използвайте тази структура, за да дефинирате две променливи,
// които се указват една друга.

#include <stdio.h>

struct info {
    int x;
    int y;
    struct info * p;
};

int main()
{
    struct info info1;
    struct info info2;

    info1.p = &info2;
    info2.p = &info1;

    info1.p->x = 20;
    info1.p->y = 20;

    info2.p->x = 10;
    info2.p->y = 10;

    printf("%d %d\n", info1.x, info1.y);

    return 0;
}

////////////////////

// struct foo {
//     int data;
//     struct foo * ptr;
// };

// int main() {
//     struct foo variableOne;
//     struct foo variableTwo;

//     variableOne.ptr = &variableTwo;
//     variableTwo.ptr = &variableOne;
    
//     return 0;
// }