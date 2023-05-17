// 10. Напишете програма, която обръща стринг, въведен от клавиатурата, използвайки указатели.

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    char *strigStart = str;
    char *stringEnd = str;
    char tempChar;

    // set the end pointer to point to the end of the string
    size_t i = 0;
    for (i = 0; i < len-1; i++)
    {
        stringEnd++;
    }

    // reverse the string
    for (i = 0; i < len/2; i++)
    {
        // swap characters
        tempChar = *strigStart;
        *strigStart = *stringEnd;
        *stringEnd = tempChar;

        // update pointers
        strigStart++;
        stringEnd--;
    }
}

int main() {
    char str[100] = "ReversedString";
    printf("Initial string:  %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);
    
    return 0;
}
