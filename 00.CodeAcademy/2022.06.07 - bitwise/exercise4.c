#include <stdio.h>

unsigned char setBit(int n, int ind)
{
    return n| (1 << ind);
}

int main()
{
    int num = 13;
    int pos = 1;
    unsigned char result = setBit(num, pos);

    printf("%d\n", result);

    return 0;
}