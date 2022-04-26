#include <stdio.h>

int main()
{
    int a = 4;
    int b = 23;
    printf("a=%d b=%d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("a=%d b=%d\n", a, b);
    
    return 0;
}