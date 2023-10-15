// https://www.codewars.com/kata/56ba65c6a15703ac7e002075/train/c
#include <math.h>
unsigned long find_next_power(unsigned value, unsigned power) {
  unsigned long result = 1;
    while (pow(result, power) <= value) {
        result++;
    }
    return pow(result, power);
}
//
unsigned long find_next_power(unsigned value, unsigned power) {
  unsigned long i = pow(value+1,1.0/power);
  return pow(i+1,power);

}
