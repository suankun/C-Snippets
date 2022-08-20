#include <stdio.h>

int main()
{
    int a = 2;
    void *ptr; // Указател към кой и да е тип

    ptr = &a;

    printf("After Typecasting, a = %d\n", *(int *)ptr);

    return 0;
}