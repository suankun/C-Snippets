#include <stdio.h>
#include <stdlib.h>

int triangular(int n) {
    int sum = 0;
    if (n <= 0) {
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// int triangular(int n) {
//     return n > 0 ? (n * n + n) / 2 : 0;
// }

int main() {
    printf("%d\n", triangular(3));

    return 0;
}
