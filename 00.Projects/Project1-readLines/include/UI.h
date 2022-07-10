#ifndef CODE_ACADEMY_DIFF_TOOL_UI_H
#define CODE_ACADEMY_DIFF_TOOL_UI_H

#include "Types.h"
#include "Queue.h"
#include "DynArr.h"

/* Stage-0 */
void S0_displayResult(Comparison result);

/* Stage-1 */
void S1_displayResult(int count);

/* Stage-2.0 */
void S2_displayResult(struct contentQueue *resultQueue);
void displayQueueContent(struct contentQueue *myContentQueue); // display all nodes in Queue

/*  Stage-2.1  */

void displayText(const struct Text *text);
void S2_1_displayResult(const struct Text *resultText);

#endif // CODE_ACADEMY_DIFF_TOOL_UI_H
