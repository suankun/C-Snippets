#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step #1 - Creting a pointer fp, that points to a FILE type
    FILE* fp;
    // Step #2 - opening/access to a file
    // fp = fopen(<file_name>, <type_of_operation>);
    // Types of operation:
    //    - "w" - writing
    //    - "r" - reading
    //    - "a" - appending
    // fp = fopen("myFirstFile.txt", "w");  // writing
    fp = fopen("myFirstFile.txt", "r");

    // Step #3 - make sure the opening is successful
    if (fp == NULL)  // if that's the case, the File opening has failed
        printf("The Opening of the file has failed\n");
    else  // fp!=NULL
    {
        // printf("The file is Opened for Writing!\n");  // for writing
        printf("The file is Opened for Reading!\n");  // for reading
        // Step #4 - write some code associated with the file
        // Step #5 - close the file
        fclose(fp);
    }

    return 0;
}
