// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/c
#include <stdio.h>
#include <ctype.h>

char *makeUpperCase(char *string) {
    if (string == NULL) {
        return NULL; // Handle NULL input
    }

    char *ptr = string;
    while (*ptr != '\0') {
        *ptr = toupper(*ptr); // Convert each character to uppercase
        ptr++;
    }

    return string;
}
//
char *makeUpperCase (char *string){
    char *stringPtr;
    for(stringPtr = string; *stringPtr != '\0'; *stringPtr++){
       *stringPtr = toupper(*stringPtr);
    }
    return string;
}
