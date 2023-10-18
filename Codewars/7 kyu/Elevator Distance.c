// https://www.codewars.com/kata/59f061773e532d0c87000d16/train/c
#include <stddef.h>

unsigned elevator_distance (size_t length, const int floors[length])
{
	int sum = 0;
    for (size_t i = 0; i<length-1; i++) sum += abs(floors[i]-floors[i+1]);
    return sum;
}
