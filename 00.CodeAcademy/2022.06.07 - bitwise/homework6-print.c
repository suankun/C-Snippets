/*
 * Write to four consecutive bytes in memory with a value
 * 0xAA (10101010) and print the contents of the above bytes if the type is: float,
 * signed int, unsigned int
 */

#include <stdio.h>

#define PRINT(num) printf("%d\n", num)
#define PRINTFLOAT(num) printf("%f\n", num)

int main()
{
    float a = 0xAA;
    signed int b = 0xAA;
    unsigned int c = 0xAA;

    PRINTFLOAT(a);
    PRINT(b);
    PRINT(c);

    return 0;
}
