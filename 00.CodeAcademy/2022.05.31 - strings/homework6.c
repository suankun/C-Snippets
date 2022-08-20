/*
 * Write a C program to remove all duplicate characters
 * in a string using loops.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, j = 0, k = 0;

    printf("Enter a string: ");
    scanf("%s", &str);

    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[j] == str[i])
            {
                str[j] = str[i];
                for (k = j; k < len - i; k++)
                {
                    str[k] = str[k + 1];
                }
                str[k] = '\0';
            }
        }
    }

    printf("Result string:  %s\n", str);

    return 0;
}