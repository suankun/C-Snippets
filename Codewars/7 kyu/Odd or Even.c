// https://www.codewars.com/kata/5949481f86420f59480000e7/train/c
#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
  int sum = 0;
  for (size_t i=0; i<sz; i++) sum += v[i];
  return sum % 2 == 0 ? "even" : "odd";
}
//
#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
  long sum = 0;
  while (sz--) sum += *v++;
  return sum & 1 ? "odd" : "even";
}
