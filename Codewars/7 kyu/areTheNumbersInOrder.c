#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size) {
  for (int i = 0; i < arr_size-1; i++) {
    if (arr[i] <= arr[i+1])
      continue;
    else
      return false;
  }
  return true;
}

// Altenative solution
bool in_asc_order(const int *arr, size_t arr_size) {
    int i = 0;
    for(; i < (arr_size - 1); i++)
    {
        if(arr[i] > arr [i + 1])
        {
            return false;
        }
    }
    return true;
}
