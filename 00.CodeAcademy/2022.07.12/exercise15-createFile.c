#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("test1.txt", "wt");
    if (NULL != fp)
    {
        fwrite("Test message", 1, strlen("Test message"), fp);
        fclose(fp);
    }

    return (0);
}