// https://www.codewars.com/kata/58d248c7012397a81800005c/train/c
#include <stdbool.h>

bool cube_checker(int volume, int side) {
    return volume==side*side*side&&volume>0;
}
