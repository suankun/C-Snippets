// https://www.codewars.com/kata/55d1d6d5955ec6365400006d/train/c
int round_to_next5(int n) {
  if (n<0) return 5*(n/5);
  return n%5==0 ? n : 5*(n/5 + 1);  
}
//
#include <math.h>

int round_to_next5(int n) {
    return ceil(n / 5.0) * 5;
}
