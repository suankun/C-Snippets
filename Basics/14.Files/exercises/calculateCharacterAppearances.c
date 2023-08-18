#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char desiredCharacter;
    char fileName[20] = {0};
    int countAppearances = 0;

    FILE* fp;

    printf("Enter a filename you want to test: ");
    scanf("%s", fileName);
    
    printf("Enter a desired character: ");
    scanf(" %c", &desiredCharacter);

    fp = fopen(fileName, "r");

    if (fp != NULL) {
        while (!feof(fp))
        {
            if (fgetc(fp) == desiredCharacter) {
                countAppearances++;
            }
        }
    }

    printf("Total appearances of character %c: %d\n", desiredCharacter, countAppearances);

    return 0;
}
