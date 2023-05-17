/*
 * Derivatives
 * (c*x^n) = n*c*x^(n-1)
 *
 * c = 4, x = 2, n = 3;
 * 3 * 4 * 2^(3-1) = 3 * 4 * 4 = 48;
 */

#include <stdio.h>
#include <math.h>

float derivative(float c, float x, float n)
{
    float powerValue = pow(x, n-1);
    return n * c * powerValue;
}

int main()
{
    printf("Hello World");

    return 0;
}