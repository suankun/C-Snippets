#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fpus(<string>, <pointer_to_a_file>)

int main() {
    FILE* fp;

    fp = fopen("myFirstFile4.txt", "w");

    if (fp != NULL)  // file was successfully opened
    {
        fputs("Hey man\n", fp);
        fputs("This is Edmont here..\n", fp);

        fclose(fp);
    }

    return 0;
}
