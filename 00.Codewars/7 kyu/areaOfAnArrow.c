#include <stdio.h>
#include <stdbool.h>

double arrow_area(unsigned a, unsigned b) {
  return 0.5 * (a * (b / 2.0));
}

//Alternative solution:
double arrow_area(unsigned a, unsigned b) {
  double aD = (double)a, bD = (double)b;  
  return (aD * bD) / 4;
}

int main()
{
    double res = arrow_area(25, 25); // 156.25
    printf("%lf\n", res);

    return 0;
}
