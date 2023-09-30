// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/c
#include <stdbool.h>
#include <ctype.h>
#include <stddef.h>

bool is_uppercase(const char *source) {
    if (source == NULL || *source == '\0') {
        return true;
    }
    
    for (; *source != '\0'; source++) {
        if (islower(*source)) {
            return false;
        }
    }
    
    return true;
}
