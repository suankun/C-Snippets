#ifndef CODE_ACADEMY_DIFF_TOOL_COMPARE_H
#define CODE_ACADEMY_DIFF_TOOL_COMPARE_H

#include "Types.h"
#include "Queue.h"
#include "DynArr.h"

/* Stage-0 */
Comparison S0_compareContents(FileContents leftFile, FileContents rightFile);

/* Stage-2.0 */
void S2_compareContents(struct contentQueue *leftQueue, struct contentQueue *rightQueue, struct contentQueue *resultQueue);

/* Stage-2.1 */

struct Text S2_1_compareContents(struct Text *left, struct Text *right);

#endif // CODE_ACADEMY_DIFF_TOOL_COMPARE_H
