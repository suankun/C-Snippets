#include <stdio.h>

int main()
{
    int a = 42;
    int *p_a = 0;

    p_a = &a;

    printf("p_a = %d\n", *p_a);
    
    return 0;
}