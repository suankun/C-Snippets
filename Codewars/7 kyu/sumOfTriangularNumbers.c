#include <stdio.h>
#include <stdlib.h>

int sumTriangularNumbers(int n)
{
    if (n < 0) {
        return 0;
    }
    int sum = 0;
    int totalSum = 0;
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            sum += j;
        }
        totalSum += sum;
        sum = 0;
    }
    return totalSum;
}

// int sumTriangularNumbers(int n)
// {
//   // triangular number
//   int t = 0;
//   // sum
//   int s = 0;

//   for (int i = 1; i < n+1; i++){
//     t = t + i;
//     s = s + t;
//   }
//   return s;
// }

int main() {
    printf("%d\n", sumTriangularNumbers(6)); // 56

    return 0;
}

