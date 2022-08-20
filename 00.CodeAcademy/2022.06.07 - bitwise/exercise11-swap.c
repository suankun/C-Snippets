#include <stdio.h>

#define swap(t, x, y) {t temp = x; x = y; y = temp;}

int main()
{
    int a = 3;
    int b = 2;
    printf("Before: %d - %d\n", a, b);
    swap(int, a, b);
    printf("After : %d - %d\n", a, b);

    return 0;
}