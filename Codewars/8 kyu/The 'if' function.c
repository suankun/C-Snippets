// https://www.codewars.com/kata/54147087d5c2ebe4f1000805/train/c
#include <stdbool.h>

void _if(bool value, void (*func1)(), void (*func2)())
{
  value==true ? func1() : func2();
}
