#ifndef CODE_ACADEMY_DIFF_TOOL_FILE_HANDLER_H
#define CODE_ACADEMY_DIFF_TOOL_FILE_HANDLER_H

#include "Types.h"
#include "DynArr.h"

/* Stage-0 */
void S0_readFile(const char *filePath, FileContents outContents);

/* Stage-1 */
int S1_readFile(const char *filePath1, const char *filePath2);

/* Stage-2 */

void S2_readFile(const char *filePath, struct contentQueue *queueContent, char file_name[]);

/* Stage-2.1  */

struct Text S2_1_readFile(const char *filePath, const char *alignment);

#endif // CODE_ACADEMY_DIFF_TOOL_FILE_HANDLER_H
