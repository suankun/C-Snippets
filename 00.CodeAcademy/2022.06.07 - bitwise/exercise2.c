#include <stdio.h>

int clearBit(int n, int ind)
{
    int result = n & (~(n << ind));
    return result;
}


int main()
{
    int n = 13;
    int pos = 3;

    printf("%d\n", clearBit(n, pos));



    return 0;
}