#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char myChar;
    int totalLines = 1;
    FILE* fp;
    fp = fopen("exerciseFile.txt", "r");

    if (fp != NULL)  // file was successfully opened
    {
        while ((myChar = fgetc(fp)) != EOF)
        {
            if (myChar == '\n')
                totalLines++;
        }
        
        printf("The total number of lines in this file is: %d\n", totalLines);
        fclose(fp);
    }

    return 0;
}
