// https://www.codewars.com/kata/53369039d7ab3ac506000467/train/c
#include <stdbool.h>

const char *bool_to_word (bool value)
{
  return value ? "Yes" : "No";
}
//
#include <stdbool.h>
#define YES "Yes"
#define NO "No"

const char *bool_to_word (bool value){
  return (value) ? YES : NO;
}
