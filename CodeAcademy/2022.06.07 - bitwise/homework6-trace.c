/*
 * Write a macro with a variable number of parameters,
 * which calls printf with prefix "TRACE:"
 */

#include <stdio.h>

#define foo(fmt, ...) printf("TRACE: "fmt"\n", ##__VA_ARGS__)

int main()
{
    foo("%d %.2f", 12, 5.5);
    foo("Hello, world!");

    return 0;
}