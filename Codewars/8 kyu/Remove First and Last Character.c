// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/c
#include <string.h>

char* remove_char(char* dst, const char* src) {
    size_t src_len = strlen(src);
    if (src_len >= 2) {
        for (size_t i = 1; i < src_len - 1; i++) {
            dst[i - 1] = src[i];
        }
        dst[src_len - 2] = '\0';
    } else {
        dst[0] = '\0';
    }

    return dst;
}
//
#include <string.h>

char* remove_char(char* dst, const char* src)
{
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    return dst;
}
