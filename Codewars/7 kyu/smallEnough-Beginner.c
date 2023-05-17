#include <stdbool.h>
#include <stddef.h>

bool small_enough(int *arr, size_t length, int limit)
{
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] > limit)
          return false;
    }
    return true;
}
