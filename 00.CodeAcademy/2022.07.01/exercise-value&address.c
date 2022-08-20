#include <stdio.h>
#include <stdlib.h>

void value(int num1, int num2)
{
    num1++;
    num2++;
    printf("Value: %d, %d\n", num1, num2);
}

void address(int *num3, int *num4)
{
    *num3 = *num3 + 1;
    *num4 = *num4 + 1;
    printf("Address: %d, %d\n", *num3, *num4);
}

int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    printf("%d, %d, %d, %d\n", a, b, c, d);
    value(a, b);
    address(&c, &d);
    printf("%d, %d, %d, %d\n", a, b, c, d);
    
    return 0;
}
