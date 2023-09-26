// https://www.codewars.com/kata/5545f109004975ea66000086/train/c
#include <stdbool.h>

bool isDivisible(int n, int x, int y) {
    return n%x==0 ? n%y==0 : false;
}
//
#include <stdbool.h>

bool isDivisible(int n, int x, int y) {
  return n % x == 0 && n % y == 0;
}
