// https://www.codewars.com/kata/50654ddff44f800200000007/train/c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *short_long_short(const char *a, const char *b) {
    // Calculate the lengths of the input strings
    size_t lenA = strlen(a);
    size_t lenB = strlen(b);

    // Calculate the total length needed for the output string
    size_t totalLen = lenA + lenB + lenA + 1; // +1 for the null terminator

    // Allocate memory for the output string
    char *result = (char *)malloc(totalLen);

    // Check if memory allocation was successful
    if (result == NULL) {
        return NULL;
    }

    // Construct the output string
    snprintf(result, totalLen, "%s%s%s", lenA <= lenB ? a : b, lenA <= lenB ? b : a, lenA <= lenB ? a : b);

    return result;
}
