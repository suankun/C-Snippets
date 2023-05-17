#include "DynArr.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Caller is responsible for freeing allocated memory */
void pushContent(struct Text *resultTextRef, struct Line *textLine) // const struct Line *
{
    resultTextRef->lines = realloc(resultTextRef->lines,
                                   sizeof(struct Line) * resultTextRef->nrOfLines);

    struct Line *currentLine = &resultTextRef->lines[resultTextRef->nrOfLines - 1];
    currentLine->content = malloc(sizeof(char) * (textLine->len + 1));
    if (currentLine->content == NULL)
    {
        fprintf(stderr, "Failled to allocate memory.\n");
        exit(1);
    }

    currentLine->row = textLine->row;
    currentLine->len = textLine->len;
    strcpy(currentLine->content, textLine->content);
    strcpy(currentLine->fileName, textLine->fileName);
}

void removeNewLines(struct Text *text)
{
    for (size_t line = 0; line < text->nrOfLines; line++)
    {
        struct Line *currLine = &text->lines[line];

        if (currLine->content[currLine->len - 1] == '\n')
        {
            currLine->content[currLine->len - 1] = '\0';
        }
    }
}

void destroyText(struct Text *text)
{
    for (size_t line = 0; line < text->nrOfLines; line++)
    {
        free(text->lines[line].content);
        text->lines[line].content = NULL;
        text->lines[line].fileName[0] = '\0';
        text->lines[line].len = 0;
        text->lines[line].row = 0;
    }

    free(text->lines);
}