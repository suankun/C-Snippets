// https://www.codewars.com/kata/515e271a311df0350d00000f/train/c
#include <stddef.h>

int square_sum(const int values[/* count */], size_t count)
{
  int sum = 0;
  for (size_t i = 0; i < count; i++) sum += (values[i] * values[i]);
	return sum;
}
//
#include <stddef.h>

int square_sum(const int *values, size_t count){
    int res = 0;
    while(count--) 
      res += (*values)*(*values++);
    return res;
}
