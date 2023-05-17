#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
    float sqr = sqrt(n);
    return sqr == sqrt(n) ? true : false;
}

// Alternative solution:
bool is_square(int n) {
    int s = sqrt(n);
    return n == s * s;
}
