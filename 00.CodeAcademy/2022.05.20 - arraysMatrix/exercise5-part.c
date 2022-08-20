#include <stdio.h>

void addOne(int, int[]);

int main()
{
    int i, a[4] = {20, 40, 10, 60};
    printf("In main()\n a = %p")


    return 0;
}

void addOne(int one, int x[])
{
    int i;
    printf("In addOne()\t x = %p\t&x[0] = %p\n", x, &x[0]);
    for (i = 0; i <= 3; i++)
    {
        x[i] = x[i] + one;
    }
}