#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// EOF // <--> End Of File

int main() {
    int num1, num2;
    int i;
    FILE* fp;

    fp = fopen("myFirstFile4.txt", "r");

    if (fp == NULL)  // file was successfully opened
    {
        while (!(feof(fp)))
        {
            // Code
        }
        fclose(fp);
    }

    return 0;
}
