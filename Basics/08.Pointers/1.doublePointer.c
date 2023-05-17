#include <stdio.h>
#include <stdlib.h>

// int * foo2(int **ptr) {
//     **ptr += 2;
//     return *ptr;
// }

int foo2(int **ptr) {
    **ptr += 2;
    return **ptr;
}

void foo(int *ptr) {
    foo2(&ptr);
}

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    foo(ptr);

    printf("%d\n", a);    

    return 0;
}