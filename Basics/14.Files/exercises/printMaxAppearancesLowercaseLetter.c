#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char fileName[20] = {0};
    char currentCharacter;
    int frequencyArray[26] = {0};
    int i;
    int maxIndex = 0;

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

    for (i = 0; i < 26; i++) {
        if (frequencyArray[maxIndex] < frequencyArray[i]) {
            maxIndex = i;
        }
    }
    printf("The maximum appearances of a lowercase is of character: %c\n", maxIndex + 'a');

    return 0;
}
