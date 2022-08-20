#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isDivisible(int n, int x, int y) {
    float firNum = (float)n / x;
    float secNum = (float)n / y;
    if (firNum == n/x && secNum == n/y) {
        return true;
    }
    return false;
}

// Alternative solution:
// bool isDivisible(int n, int x, int y) {
//   return n % x == 0 && n % y == 0;
// }

int main() {

    printf("%s\n", isDivisible(12, 2, 6) ? "True" : "False");
    printf("%s\n", isDivisible(100, 5, 3) ? "True" : "False");

    return 0;
}
