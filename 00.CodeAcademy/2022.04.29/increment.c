#include <stdio.h>

int main()
{
    int count = 10;
    int total = 10;
    
    printf("%d\n", ++count);
    printf("%d\n", total++);

    return 0;
}

int main()
{
    int x = 4, y = 6;
    int z = ++x-y++;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

int main()
{
    int x = 4;
    int z = ++x + x;
    printf("%d\n", z);

    int w = x++ + x;
    printf("%d\n", w);

    return 0;
}