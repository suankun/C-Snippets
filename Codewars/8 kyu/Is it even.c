// https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/c
#include <stdbool.h>

bool is_even(double n)
{
    return (remainder(n, 2) == 0) ? true : false;
}
//
#include <stdbool.h>
#include <math.h>

bool is_even(double n)
{
  return fmod(n, 2.0) == 0.0;
}
