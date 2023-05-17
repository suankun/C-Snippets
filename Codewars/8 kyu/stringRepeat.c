#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
    char *rep = malloc(strlen (src) * count + count);
    strcpy(rep, src);
    while (--count > 0)
        strcat (rep, src);
    return rep;
}

// Alternative solution 1:
#include <string.h>

char *repeat_str(size_t count, const char *src) {
  int length = strlen(src);
  char* dest = malloc(count * length * sizeof(char));
  for (int i = 0; i < count; i++) {
    strcpy(dest + i * length, src);
  }
  return dest;
}

// Alternative solution 2:
#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
  char *result = calloc(((count * strlen(src)) + 1), sizeof(char));
  while (count--)
    strcat(result, src);
  return result;
}
