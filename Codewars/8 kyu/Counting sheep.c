// https://www.codewars.com/kata/54edbc7200b811e956000556/train/c
#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  size_t sum = 0;
  for (size_t i = 0; i < count; i++) {
    if (sheep[i] == true) sum++;
  }
  return sum;
}
//
#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count) {
  int number = 0;
  for (size_t n = 0; n < count; n++) {
    if (sheep[n] == true)
      number++;
    else if (sheep[n] != false)
      printf("Null or undefined");
  }
  return number;
}
