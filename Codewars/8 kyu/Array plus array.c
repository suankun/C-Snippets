// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/c
#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
  long sum = 0;
  for (size_t i = 0; i < na; i++) sum += a[i];
  for (size_t i = 0; i < nb; i++) sum += b[i];
    return sum;
}
