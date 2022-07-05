#include <string.h>

int correct_tail(const char *body, const char *tail) {
  return body[strlen(body) - 1] == tail[0] ? 1 : 0;
}

// Alternative solution:
#include <string.h>

int correct_tail(const char *body, const char tail[1]) {
  return body[strlen(body) - 1] == *tail;
}
