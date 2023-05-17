#include <stdio.h>

unsigned char reverseBit(int n, int ind)
{
    return n ^ (1 << ind);
}

int main()
{
    int num = 12;
    int pos = 2;
    unsigned char result = reverseBit(num, pos);

    printf("%d\n", result);

    return 0;
}