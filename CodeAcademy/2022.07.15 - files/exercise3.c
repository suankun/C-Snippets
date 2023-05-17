#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

int main()
{
    FILE * fPtr;

    char buffer[BUFFER_SIZE];
    int totalRead = 0;
    fPtr = fopen("data/file2.txt", "r");

    if (fPtr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading file content character by character.\n");

    while (fgets(buffer, BUFFER_SIZE, fPtr) != NULL)
    {
        totalRead = strlen(buffer);
        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n'
                    ? '\0'
                    : buffer[totalRead - 1];
        printf("%s\n", buffer);

    }

    fclose(fPtr);    

    return 0;
}