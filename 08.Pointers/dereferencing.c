/*
 * Pointers example of dereferencing, printing the value of the variable.
 */

#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    
    p = &a;
    
    printf("%d\n", a);
    printf("%d\n", *p);
    
    return 0;
}