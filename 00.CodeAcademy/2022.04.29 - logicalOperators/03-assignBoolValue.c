#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    int t, f;

    t = x == y;
    f = x != y;

    printf("t = %d\n", t);
    printf("f = %d\n", f);

    return 0;
}

// int main()
// {
//     int x = 10;
//     int y = 10;
//     int t = (x == y);
//     int f = (x != y);

//     printf("%d, %d", t, f);

//     return 0;
// }