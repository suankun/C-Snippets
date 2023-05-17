#include <stdio.h>
#include <stdlib.h>

int digital_root(int n) {
    int temp = 0, sum = 0;
    
    while (n != 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }

    return sum >= 10 ? digital_root(sum) : sum;
}

int main()
{
    int res = digital_root(942);
    // 942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
    int res1 = digital_root(493193);
    // 493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

    printf("%d\t%d\n", res, res1);

    return 0;
}

// Alternative solution 1:
int digital_root(int Z) {
  return --Z % 9 + 1;
}

// Alternative solution 2:
int digital_root(int n) {
  if (n < 10) return n;
  int r = 0;
  while (n) r += n % 10, n /= 10;
  return digital_root(r);
}
