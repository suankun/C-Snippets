#include <stdbool.h>
#include <stdlib.h>

bool set_alarm(bool employed, bool vacation) {
  return (employed == true && vacation == false) ? true : false;
}

// Alternative solution:

#include <stdbool.h>

bool set_alarm(bool employed, bool vacation) {
  return employed && !vacation;
}
