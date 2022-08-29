#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    int a = 5;
    ptr = &a;
    free(ptr);
    // now this ptr is known as dangling pointer
    printf("After delocating its memory *ptr = %d", *ptr);

    return 0;
}