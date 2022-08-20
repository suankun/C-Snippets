#include <stdio.h>

#define max(A, B) (A) > (B) ? A : B // makros

int maximalno(int x, int y)     // function
{
    return (x > y) ? x : y;
}

int main()
{
    int a = 34, b = 89, c = 12;
    int maximum = max(max(a, b), c);
    int maximum1 = maximalno(maximalno(a, b), c);


    printf("%d\n", maximum);
    printf("%d\n", maximum1);

    return 0;
}