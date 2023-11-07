// https://www.codewars.com/kata/58249d08b81f70a2fc0001a4/train/c
#include <math.h>

int round_to_10 (int n)
{
    float res = 0;
    if (n%10 <5) res = (floor(n/10.0))*10;
    else res = (ceil(n/10.0))*10;
    return res;
}
//
#include <math.h>

int round_to_10 (int n)
{
  return round(n / 10.0) * 10;
}
