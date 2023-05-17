#include <stdio.h>

unsigned char bitAt(int num, int index)
{
    return (num >> index) & 1;
}


int main()
{
    int n = 13;
    int pos = 3;
    unsigned char result = bitAt(n, pos);
    printf("%d\n", result);

    // int x = 3;
    // int y = 5;
    // int z = x & y;
    // int p = x | y;
    // int q = x ^ y;

    // printf("%d\n", z);
    // printf("%d\n", p);
    // printf("%d\n", q);

    // int a = 2534;
    // printf("%d\n", a ^ a); // gives 0 because the integer is the same

    return 0;
}