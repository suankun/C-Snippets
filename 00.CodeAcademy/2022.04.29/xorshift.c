#include <stdio.h>

int main()
{
    int A = 1;

    A ^= A << 13;
    printf("%d\n", A); 

    A ^= A >> 17;
    printf("%d\n", A);

    A ^= A << 5;
    printf("%d\n", A); 


    return 0;
}