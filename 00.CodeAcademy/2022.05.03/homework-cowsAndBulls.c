#include <stdio.h>

int main()
{
    int n, s;
    int bulls = 0, cows = 0;
    int a, b, c, d;
    int x, y, f, z;

    printf("Cows - enter a 4 digits number: ");
    scanf("%d", &n);

    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;

    printf("Bulls - enter a 4 digits number: ");
    scanf("%d", &s);

    x = s % 10;
    y = (s / 10) % 10;
    f = (s / 100) % 10;
    z = (s / 1000) % 10;

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("x = %d, y = %d, f = %d, z = %d\n", x, y, f, z);

    if(a == x)
        cows++;
    else if(a == y || a == f || a == z)
        bulls++;

    if(b == y)
        cows++;
    else if(b == x || b == f || b == z)
        bulls++;

    if(c == f)
        cows++;
    else if(c == x || c == y || c == z)
        bulls++;

    if(d == z)
        cows++;
    else if(d == x || d == y || d == f)
        bulls++;

    printf("Bulls = %d\n", bulls);
    printf("Cows = %d\n", cows);

    return 0;
    
}