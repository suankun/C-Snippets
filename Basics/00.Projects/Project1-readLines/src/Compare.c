#include "Compare.h"
#include "FileHandler.h"
#include "Queue.h"
#include "DynArr.h"

#include <string.h>

/* STAGE 0 */
/* typedef bool Comparison */
/* typedef char FileContents[2048] */
Comparison S0_compareContents(FileContents arg, FileContents arg1)
{
    int first = strlen(arg);
    int second = strlen(arg1);

    if (first == second)
    {
        for (int index = 0; index < first; index++)
        {
            if (arg[index] != arg1[index])
            {
                return false;
            }
        }

        return true;
    }

    return false;
}

/* STAGE 2 */
void S2_compareContents(struct contentQueue *leftQueue, struct contentQueue *rightQueue, struct contentQueue *resultQueue)
{
    struct Node *left = leftQueue->head;
    struct Node *right = rightQueue->head;

    int row = 1;

    while (left != NULL || right != NULL)
    {
        if (left == NULL)
        {
            enQueueContent(resultQueue, row, "Right", right->line);
            right = right->next;
        }
        else if (right == NULL)
        {
            enQueueContent(resultQueue, row, "Left ", left->line);
            left = left->next;
        }
        else if (strcmp(left->line, right->line))
        {
            enQueueContent(resultQueue, row, "Left ", left->line);
            enQueueContent(resultQueue, row, "Right", right->line);
            left = left->next;
            right = right->next;
        }
        else
        {
            left = left->next;
            right = right->next;
        }

        row++;
    }
}

/* STAGE 2.1 */
/* Returns a struct Text with all the differences between two files in it.
Caller is responsible for deallocation of the memory.
 */
struct Text S2_1_compareContents(struct Text *left, struct Text *right)
{
    // size_t row = 1;

    struct Text resultText = {0};

    struct Text *smaller = (left->nrOfLines < right->nrOfLines) ? left : right;
    struct Text *bigger = (left->nrOfLines > right->nrOfLines) ? left : right;

    for (size_t i = 0; i < smaller->nrOfLines; i++)
    {
        struct Line *leftLine = &left->lines[i];
        struct Line *rightLine = &right->lines[i];

        if (strcmp(leftLine->content, rightLine->content))
        {
            resultText.nrOfLines++;

            // Allocate memory for first line

            pushContent(&resultText, leftLine);

            resultText.nrOfLines++;

            // Allocate memory for second line

            pushContent(&resultText, rightLine);
        }
    }

    /* Special case: when one of the files has a bigger size  */
    if (bigger->nrOfLines > smaller->nrOfLines)
    {
        for (size_t i = smaller->nrOfLines; i < bigger->nrOfLines; i++)
        {
            struct Line *remLine = &bigger->lines[i];
            resultText.nrOfLines++;

            pushContent(&resultText, remLine);
        }
    }

    return resultText;
}