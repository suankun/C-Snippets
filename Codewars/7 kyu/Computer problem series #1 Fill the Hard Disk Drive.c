// https://www.codewars.com/kata/5d49c93d089c6e000ff8428c/train/c
#include <stddef.h>

size_t save(size_t n, size_t sizes[n], size_t hd) {
  int count = 0, capacity = 0;
  for (size_t i=0; i<n; i++) {
    capacity+=sizes[i];
    if (capacity>hd) break;
    else count++;
  }
  return count;
}
