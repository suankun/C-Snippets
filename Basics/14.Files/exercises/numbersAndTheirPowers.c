#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    FILE* fp;
    fp = fopen("exerciseFile2.txt", "w");

    if (fp != NULL)  // file was successfully opened
    {
        for (i = 1; i <= 10; i++) {
            fprintf(fp, "%d %d\n", i, i*i);
        }
        
        fclose(fp);
    }

    return 0;
}
