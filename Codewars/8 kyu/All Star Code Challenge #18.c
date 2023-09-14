// https://www.codewars.com/kata/5865918c6b569962950002a1/train/c
#include <stddef.h>

size_t str_count(const char *str, char letter) {
  unsigned int counter = 0;
    for (size_t i = 0; i<strlen(str); i++) {
        if (str[i] == letter) counter++;
    }
    return counter;
}
//
#include <stddef.h>

size_t str_count(const char *str, char letter)
{
  int count = 0;
  while (*str) count += *str++ == letter;
  return count;
}
