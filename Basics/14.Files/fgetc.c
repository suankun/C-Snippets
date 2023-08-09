#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fgetc(<pointer_to_a_file>)

int main() {
    FILE* fp;
    char myChar1;

    fp = fopen("myFirstFile.txt", "r");

    if (fp != NULL)  // file was successfully opened
    {
        printf("The file is Opened for Reading! \n");
        myChar1 = fgetc(fp);
        printf("The first character that was read is: %c \n", myChar1);
        myChar1 = fgetc(fp);
        printf("The second character that was read is: %c \n", myChar1);

        fgetc(stdin);  // getchar();

        fclose(fp);
    }

    return 0;
}
