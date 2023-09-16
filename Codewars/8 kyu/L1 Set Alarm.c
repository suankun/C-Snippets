// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/c
#include <stdbool.h>
#include <stdlib.h>

bool set_alarm(bool employed, bool vacation) {
  return (employed == true && vacation == false);
}
//
#include <stdbool.h>

bool set_alarm(bool employed, bool vacation) {
  return employed && !vacation;
}
