// https://www.codewars.com/kata/5f0ed36164f2bc00283aed07/train/c
#include <stddef.h>

size_t over_the_road(size_t address, size_t street) {
  return street*2-address+1;
}
