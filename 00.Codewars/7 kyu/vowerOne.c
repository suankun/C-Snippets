#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vowel_one(const char *input, char *output) {
    char ch;
    for (const char *p = input; *p; p++) {
        
        if (strchr("aeiouAEIOU", *p)) {
            ch = '1';
            strncat(output, &ch, 1);
        } else {
            ch = '0';
            strncat(output, &ch, 1);
        }
    }

    return output;
}

int main() {
    // const char str[] = "vowelOne"; // 01010101
    const char str[] = "uEaefipla{zX7)Oiz_klUUKap[Mde1hU+fAUB7/XRbblARn7G.U+E(aTWWi]ftoU,j4qUHA}!HUUI|i";
    //                 "1111010010000011000011010000100100110000000010000010101000100011000010100011101"
    char output[] = "";
    printf("%s\n", vowel_one(str, output));

    return 0;
}
