#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Line
{
    char *cont;
    size_t len;
};

struct Text
{
    struct Line *lines;
    size_t nrOfLines;
};

struct Text readLines(/* temp */ char lines[5][20])
{
    struct Text text = {0};

    for (size_t i = 0; i < 5; i++)
    {
        const size_t len = strlen(lines[i]);

        if (len > 0)
        {
            text.nrOfLines++;

            text.lines = realloc(text.lines,
                                 sizeof(struct Line) * text.nrOfLines);

            struct Line *currentLine = &text.lines[text.nrOfLines - 1];

            currentLine->len = len;
            currentLine->cont = malloc(sizeof(char) * (len + 1));

            strcpy(currentLine->cont, lines[i]);
        }
    }

    return text;
}

void removeNewLines(struct Text *text)
{
    for (size_t i = 0; i < text->nrOfLines; i++)
    {
        struct Line *line = &text->lines[i];

        if (line->cont[line->len - 1] == '\n')
        {
            line->cont[line->len - 1] = '\0';
        }
    }
}

void destroyText(struct Text *text)
{
    for (size_t i = 0; i < text->nrOfLines; i++)
    {
        free(text->lines[i].cont);
        text->lines[i].cont = NULL;
        text->lines[i].len = 0;
    }

    free(text->lines);
}

void eraseLine(struct Text *text, size_t index)
{
    if (index >= text->nrOfLines)
    {
        fprintf(stderr, "Index %zu is out of bounds.\n", index);
        return;
    }

    free(text->lines[index].cont);

    for (size_t i = index; i < text->nrOfLines - 1; i++)
    {
        text->lines[i] = text->lines[i + 1];
    }

    text->nrOfLines--;

    text->lines = realloc(text->lines, sizeof(struct Line) * text->nrOfLines);
}

int main()
{
    char lines[5][20] = {
        "hello\n",
        "",
        "beautiful",
        "",
        "world\n",
    };

    struct Text text = readLines(lines);

    removeNewLines(&text);

    for (size_t i = 0; i < text.nrOfLines; i++)
    {
        printf("%s\n", text.lines[i].cont);
    }

    eraseLine(&text, 1);

    for (size_t i = 0; i < text.nrOfLines; i++)
    {
        printf("%s\n", text.lines[i].cont);
    }

    destroyText(&text);

    return 0;
}