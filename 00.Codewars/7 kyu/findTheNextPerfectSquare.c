#include <stdio.h>
#include <stdlib.h>

#include <math.h>

long int findNextSquare(long int sq)
{
    long int currPerSq = sqrt(sq);
    if ((currPerSq*currPerSq) == sq)
    {
        long int res = (currPerSq + 1) * (currPerSq + 1);
        return res;
    }
    else
    {
        return -1;
    }
}

// long int findNextSquare(long int sq)
// {
//   long n = sqrt(sq);
//   return n * n == sq ? pow(n + 1, 2) : -1;
// }

int main() {
    
    int res = findNextSquare(63); // 90
    printf("%ld\n", res);

    return 0;
}
