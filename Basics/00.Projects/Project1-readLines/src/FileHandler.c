#include "UI.h"
#include "Types.h"
#include "FileHandler.h"
#include "Queue.h"
#include "DynArr.h"

#include <stdio.h>
#include <string.h>

/* STAGE 0 */
void S0_readFile(const char *filePath, FileContents outContents)
{
    // open the file
    FILE *filePointer = fopen(filePath, "r");
    int index = 0;

    while (filePointer)
    {
        // Taking input single character at a time
        char currentChar = fgetc(filePointer);

        if (currentChar == EOF)
        {
            break;
        }

        outContents[index] = currentChar;
        index++;
    }
    outContents[index] = '\0';

    fclose(filePointer);
}

/* STAGE 1 */
int S1_readFile(const char *filePath1, const char *filePath2)
{
    FILE *filePointer1 = fopen(filePath1, "r");
    FILE *filePointer2 = fopen(filePath2, "r");

    char firstLine[150] = "";
    char secondLine[150] = "";

    int count = 0;

    while ((!feof(filePointer1)) && (!feof(filePointer2)))
    {

        fgets(firstLine, 150, filePointer1);

        fgets(secondLine, 150, filePointer2);

        if (strcmp(firstLine, secondLine))
        {
            count++;
        }

        secondLine[0] = '\0';
        firstLine[0] = '\0';
    }

    fclose(filePointer1);
    fclose(filePointer2);

    return count;
}

/* STAGE 2 */
void S2_readFile(const char *filePath, struct contentQueue *queueContent, char file_name[])
{
    // open the file
    FILE *filePointer = fopen(filePath, "r");
    char singleLine[150] = "";
    int terminatedNull = 0;
    int index = 0;

    while (!feof(filePointer))
    {
        // Taking input single line at a time
        fgets(singleLine, 150, filePointer);

        terminatedNull = strlen(singleLine);

        if (feof(filePointer))
        {
            if (singleLine[terminatedNull] == '\0')
            {
                singleLine[terminatedNull] = '\n';
                singleLine[terminatedNull + 1] = '\0';
            }
        }

        enQueueContent(queueContent, index, file_name, singleLine);
        singleLine[0] = '\0';
    }

    fclose(filePointer);
}

/* STAGE 2.1 */

struct Text S2_1_readFile(const char *filePath, const char *alignment)
{
    FILE *filePointer = fopen(filePath, "r");
    char singleLine[150] = "";
    size_t len = 0;

    struct Text currentText = {0};

    while (!feof(filePointer))
    {
        fgets(singleLine, sizeof(singleLine), filePointer);
        len = strlen(singleLine);

        currentText.nrOfLines++;

        currentText.lines = realloc(currentText.lines,
                                    sizeof(struct Line) * currentText.nrOfLines);

        struct Line *currentLine = &currentText.lines[currentText.nrOfLines - 1];

        currentLine->len = len;
        currentLine->content = malloc(sizeof(char) * (len + 1));
        currentLine->row = currentText.nrOfLines;

        strcpy(currentLine->content, singleLine);
        strcpy(currentLine->fileName, alignment);

        singleLine[0] = '\0';
    }

    fclose(filePointer);
    return currentText;
}