#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char fileName[20] = {0};
    char currentCharacter;
    int frequencyArray[26] = {0};
    int i;

    FILE* fp;

    printf("Enter a filename you want to test: ");
    scanf("%s", fileName);
    
    fp = fopen(fileName, "r");

    if (fp != NULL) {
        while (!feof(fp))
        {
            currentCharacter = fgetc(fp);
            if (currentCharacter >= 'a' && currentCharacter <= 'z') {  // current char holds lowercase letter
                frequencyArray[currentCharacter-'a']++;
            }
        }
    }

    printf("Total appearances of lowercase letters in file '%s': \n", fileName);
    for (i = 0; i < 26; i++) {
        printf("Letter '%c' appears %d times\n", i+'a', frequencyArray[i]);
    }

    return 0;
}
