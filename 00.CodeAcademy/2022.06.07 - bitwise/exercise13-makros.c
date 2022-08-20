#include <stdio.h>

// #define AVG(x, y) {(x + y) / 2}

#define AVG(x, y) ({float sum = 0.0; int count = 0; int result; \
for (int i = x; i <= y; i++) { sum += i; count++;} result = sum/count;})

int main()
{
    float x = AVG(10, 20);
    printf("%f", x);

    return 0;
}