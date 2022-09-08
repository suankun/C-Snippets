#include <stdio.h>
#include <stdlib.h>

union value
{
    long int i_value;
    float f_value;
} data;

int i; // Random int
int f; // Random float

int main()
{
    data.f_value = 5.0;
    data.i_value = 3;

    i = data.i_value;
    f = data.f_value = 3;

    printf("%d\n%f\n", i, f);

    data.f_value = 5.5;

    printf("%d\n%f\n", data.i_value, data.f_value);

    i = data.i_value;

    printf("%d\n%f\n", i, f);

    return 0;
}