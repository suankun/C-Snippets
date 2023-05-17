/*
 * We need a simple function that determines
 * if a plural is needed or not. It should take a number,
 * and return true if a plural should be used 
 * with that number or false if not. This would be useful 
 * when printing out a string such as 5 minutes,
 * 14 apples, or 1 sun. 
 */

#include <stdbool.h>
#include <stddef.h>

bool plural(const size_t value)
{
    if(value > 1 || value < 1)
        return true;
    else
        return false;
}

/*Solution 2*/
#include <stdbool.h>
#include <stddef.h>

bool plural(const size_t value) {
  return value != 1;
}

/*Solution 3*/
#include <stdbool.h>
#include <stddef.h>

#define true 1
#define false 0

bool plural(const size_t value)
{
  return value == 1 ? false : true;
}