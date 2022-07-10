#ifndef CODE_ACADEMY_DIFF_DYNAMIC_ARRAY_H
#define CODE_ACADEMY_DIFF_DYNAMIC_ARRAY_H

#include <stddef.h>

struct Line
{
    size_t row;
    // const char *fileName;
    char fileName[10];
    char *content;
    size_t len;
};

struct Text
{
    struct Line *lines;
    size_t nrOfLines;
};

void removeNewLines(struct Text *text);
void destroyText(struct Text *text);
void pushContent(struct Text *resultTextRef, struct Line *textLine);

#endif