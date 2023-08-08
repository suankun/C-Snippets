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
    fp = fopen();  // TODO - complete

    // if (fp! = NULL) - to make sure that the open operation was successful

    // Code for working with the file..

    fclose(fp);

    return 0;
}
