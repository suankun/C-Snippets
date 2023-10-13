// https://www.codewars.com/kata/52b5247074ea613a09000164/train/c
#include <math.h>
unsigned cooking_time(unsigned eggs)
{
    if (eggs == 0) return 0;
    double check = ceil(eggs/8.0);
    return eggs<=8 ? 5 : (check * 5);
}
