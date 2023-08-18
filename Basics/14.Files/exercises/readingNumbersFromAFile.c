#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int i;
    FILE* fp;
    fp = fopen("exerciseFile2.txt", "r");

    if (fp != NULL)  // file was successfully opened
    {
        for (i = 1; i <= 10; i++) {
            fscanf(fp, "%d%d", &num1, &num2);
            printf("Read: %d %d\n", num1, num2);
        }
        
        fclose(fp);
    }

    return 0;
}
