// https://www.codewars.com/kata/58ca658cc0d6401f2700045f/train/c
#include <stddef.h>

typedef unsigned int uint;

void find_multiples(uint n, uint limit, size_t *count, uint multiples[]) {
    *count = 0;

    for (uint i = n; i <= limit; i += n) {
        multiples[*count] = i;
        (*count)++;
    }
}
//
#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[])
{
  for(int i = 1; i <= (*count = limit / n); i++)  multiples[i-1] = n * i;
}
