// https://www.codewars.com/kata/5b853229cfde412a470000d0/train/c
int twice_as_old (int father_age, int son_age)
{
  int result = father_age - (son_age * 2);
  return result < 0 ? result * (-1) : result;
}
//
#include <stdlib.h>

int twice_as_old (int father_age, int son_age)
{
  return abs(father_age - son_age * 2);
}
