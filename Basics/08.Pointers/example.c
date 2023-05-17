/*
 * Pointers example, printing the address of the variable.
 */

#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    
    p = &a;
    
    printf("%p\n", &a);
    printf("%p\n", p);
    
    return 0;
}