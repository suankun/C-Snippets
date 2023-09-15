// https://www.codewars.com/kata/5601409514fc93442500010b/train/c
#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points) {
double sum = 0;
  for (int i = 0; i<class_size; i++) sum += class_points[i];
  sum += your_points;
  return sum/(class_size+1)>=your_points ? false : true;
}
//
int better_than_average(int class_points[], int class_size, int your_points) {
  int i = 0, avarage = 0;
  for (i; i < class_size; i++) {
    avarage += class_points[i];
  }
  return your_points > avarage / class_size;
}