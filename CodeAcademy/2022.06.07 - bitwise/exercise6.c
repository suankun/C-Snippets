#include <stdio.h>

int main()
{
    int n = 13; // 00001101  --> 00001000 (8)
    int pos = 0;
    int result = 0;

    for (pos = 0; pos < 8; pos += 2)
    {
        result = n & ~(1 << pos);
        n = result;
    }

    printf("%d\n", n);

    return 0;
}