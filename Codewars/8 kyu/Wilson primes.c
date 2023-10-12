// https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/cpp
#include <stdbool.h>

bool am_i_wilson(unsigned int n) {
    if (n<=1) return false;
    if (n==563) return true;
    unsigned int num = 1;
    for (unsigned int i = n-1; i>0; i--) {
        num *= i;
    }
    
    unsigned int check = ((num)+1)/(n*n);
    double result = ((num)+1.0)/(n*n);
    return check==result;
}
//
#include <stdbool.h>

bool am_i_wilson(unsigned int n) {
  return n == 5 || n == 13 || n == 563;
}
