// https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/c
#include <stdlib.h>
#include <stdio.h>

//  return a dynamically allocated C-string
//  this output will be freed by the tester

char *number_to_string(int number) {
    char *result = malloc(sizeof(char) * 50);
    sprintf(result, "%d", number);
    return result;
}
//
#include <stdio.h>

const char* number_to_string(int number) {
    char *s;
    asprintf(&s, "%d", number);
    return s;
}
