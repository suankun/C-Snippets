#include <stdio.h>

#define number(a, b) (b - a + 1)

#define sum(t, a, b) ((t)(a + b) * number(a, b) / 2)

#define AVG(t, a, b) sum(t, a, b) / number(a, b)

#define min(a, b) a

int main()
{
    printf("%d\n", number(10, 20));
    printf("%.2f\n", sum(float, 10, 20));
    printf("%.2f\n", AVG(float, 10, 20));

    return 0;
}