#include <stdio.h>

typedef int (*Ptr) (int, int);

int sum(int x, int y)
{
    return x + y;
}

int difference(int x, int y)
{
    return x - y;
}

Ptr (Convert(const char code)) 
{
    if (code == '+') return &sum;
    if (code == '-') return &difference;
}

int main()
{
    Ptr ptr;
    ptr = Convert('+');
    printf("%d\n", ptr(4, 2));
    ptr = Convert('-');
    printf("%d\n", ptr(4, 2));

    return 0;
}
