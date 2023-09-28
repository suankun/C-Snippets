// https://www.codewars.com/kata/5715eaedb436cf5606000381/train/c
#include <stddef.h>

int positive_sum(const int *values, size_t count){
  int sum = 0;
  for (size_t i = 0; i < count; i++) {
    if (*values > 0) sum += *values;
    values++;
  }
  return sum;
};
