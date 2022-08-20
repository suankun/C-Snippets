#include <stdio.h>
#include <string.h>

int main()
{
    /*
    "  hello world  "
    1. delete front empty spaces
    "hello world  "
    2. delete back empty spaces
    "hello world"
    */

    char str[] = "  Hello World!  ";

    int len = strlen(str);

    int i = 0, j = 0;
    for (i = 0; str[i] == '\0'; i++)
    {
        if (str[i] == ' ')
        for (j = i; j < len; j++)
        {
            str[j] = str[j + 1];
        }
    }

    printf("%s\n", str);

    return 0;
}