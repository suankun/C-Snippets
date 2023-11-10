// https://www.codewars.com/kata/55cbc3586671f6aa070000fb/train/c
#include <stdbool.h>

bool check_for_factor(int base, int factor) {
  return (base % factor == 0) ? true : false;
}
//
#include <stdbool.h>

bool check_for_factor(int base, int factor) {
  return base % factor == 0;
}
