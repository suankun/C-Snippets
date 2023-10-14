// https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/c
#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons) {
  return bullets >= 2*dragons;
}
//
#include <stdbool.h>
#include <stdint.h>

_Bool hero(uint32_t bullets, uint32_t dragons) {
  return bullets >> 1 >= dragons;
}
