#include <stdio.h>

int main()
{
    float a = 1.0e-5, b = 1.0e+5, c;
    c = a + b;
    printf("%e + %e = %e\n", a, b, c);

    return 0;
}