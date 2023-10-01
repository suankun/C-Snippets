// https://www.codewars.com/kata/64fbfe2618692c2018ebbddb/train/c
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

void flick_switch(size_t length, const char *array[length], bool result[length]) {
    bool flick = true;
    for (size_t i = 0; i < length; i++) {
        if (strcmp(array[i], "flick") == 0) {
            if (flick == true) flick = false;
            else flick = true;
            result[i] = flick;
        } else {
            result[i] = flick;
        }
    }
}
//
#include <stdbool.h>
#include <string.h>

void flick_switch(size_t length, const char *const array[length], bool result[length]) {
    bool flick = true;
    for(size_t index = 0; index < length; index++) {
        result[index] = flick ^= !strcmp(array[index], "flick");
    }
}
