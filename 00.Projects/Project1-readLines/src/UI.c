#include "UI.h"
#include "Queue.h"
#include "DynArr.h"

#include <stdio.h>

/*          STAGE 0
#### Suggested output:
"`Files are identical.`" or "`Files are different.`"
*/
void S0_displayResult(Comparison result)
{
    if (result)
    {
        printf("Files are identical.\n");
    }
    else
    {
        printf("Files are different.\n");
    }
}

/*          STAGE 1         */
void S1_displayResult(int count)
{
    if (count == 0)
    {
        printf("Files are identical.\n");
    }
    else
    {
        if (count == 1)
        {
            printf("%d line differs.\n", count);
        }
        else
        {
            printf("%d lines differ.\n", count);
        }
    }
}

/*          STAGE 2         */
void displayQueueContent(struct contentQueue *queueContent)
{
    while (queueContent->head != NULL)
    {
        printf("%s %d: %s", queueContent->head->file, queueContent->head->row, queueContent->head->line);
        deeQueueContent(queueContent);
    }
}

void S2_displayResult(struct contentQueue *resultQueue)
{
    if (resultQueue->head == NULL)
    {
        printf("Files are identical.\n");
    }
    else
    {
        displayQueueContent(resultQueue);
    }
}

/* stage-2.1 */

void displayText(const struct Text *text)
{
    for (size_t line = 0; line < text->nrOfLines; line++) // text->lines[line].row
    {
        printf("%s %zu: %s\n", text->lines[line].fileName, text->lines[line].row, text->lines[line].content);
    }
}

void S2_1_displayResult(const struct Text *resultText)
{
    if (resultText->lines == NULL)
    {
        printf("Files are identical.\n");
    }
    else
    {
        displayText(resultText);
    }
}