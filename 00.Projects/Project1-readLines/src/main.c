#include "Types.h"
#include "Compare.h"
#include "FileHandler.h"
#include "UI.h"
#include "Queue.h"
#include "DynArr.h"

#include <stdio.h>

void argumentCheck(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s incorrect number of arguments.\n", argv[0]);
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    argumentCheck(argc, argv);
    /* ********************** Stage - 0 ********************* */

    // FileContents leftFile;
    // FileContents rightFile;

    // S0_readFile(argv[1], leftFile);
    // S0_readFile(argv[2], rightFile);

    // Comparison result = S0_compareContents(leftFile, rightFile);

    // S0_displayResult(result);

    /* ********************** Stage - 1 ********************* */

    // int num = S1_readFile(argv[1], argv[2]);

    // S1_displayResult(num);

    /* ********************** Stage - 2.0 ********************* */

    // struct contentQueue *leftQueue = emptyInit();
    // struct contentQueue *rightQueue = emptyInit();
    // struct contentQueue *resultQueue = emptyInit();

    // S2_readFile(argv[1], leftQueue, "Left ");
    // S2_readFile(argv[2], rightQueue, "Right");

    // S2_compareContents(leftQueue, rightQueue, resultQueue);

    // S2_displayResult(resultQueue);

    /* ********************** Stage - 2.01 ********************* */

    struct Text leftText = S2_1_readFile(argv[1], "Left ");
    struct Text rightText = S2_1_readFile(argv[2], "Right");
    removeNewLines(&leftText);
    removeNewLines(&rightText);

    struct Text resultText = S2_1_compareContents(&leftText, &rightText);

    S2_1_displayResult(&resultText);

    destroyText(&leftText);
    destroyText(&rightText);
    destroyText(&resultText);

    return 0;
}
