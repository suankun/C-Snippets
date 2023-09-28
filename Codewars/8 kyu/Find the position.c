// https://www.codewars.com/kata/5808e2006b65bff35500008f/train/c
char* position(char alphabet) {
    static char result[50];

    if (alphabet >= 'a' && alphabet <= 'z') {
        sprintf(result, "Position of alphabet: %d", alphabet - 'a' + 1);
    } else if (alphabet >= 'A' && alphabet <= 'Z') {
        sprintf(result, "Position of alphabet: %d", alphabet - 'A' + 1);
    }

    return result;
}
//
#include <string.h>

char* position(char alphabet)
{
	char *str;
	asprintf(&str, "Position of alphabet: %d", alphabet - 'a' + 1);
  return str;
}
