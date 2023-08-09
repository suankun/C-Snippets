#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fgetc(<pointer_to_a_file>)
// fputc(<character>, <pointer_to_a_file>)

int main() {
    FILE* fp;

    fp = fopen("myFirstFile2.txt", "w");

    if (fp != NULL)  // file was successfully opened
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);

        fclose(fp);
    }

    putchar('a', stdout);

    return 0;
}
