// https://www.codewars.com/kata/56606694ec01347ce800001b/train/c
#include <stdbool.h>

bool is_triangle(int a, int b, int c)
{
  return (a+b>c && a+c>b && b+c>a);
}
