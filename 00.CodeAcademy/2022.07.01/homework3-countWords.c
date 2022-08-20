// Задача 3. Напишете C програма за преброяване на броя на
// думите в низ.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wordCount(char *str);

int main()
{
    char str[] = "one two three four five";
    char *p = str;
    printf("%s\n", p);

    printf("%d\n", wordCount(p));

    return 0;
}

int wordCount(char *str)
{
    int count = 1;
    int i = 0;
    // for (i = 0; i < strlen(str); i++)
    // {
    //     if (str[i] ==  ' ')
    //     {
    //         count++;
    //     }
    // }

    while (str[i] != '\0')
    {
        if (str[i] ==  ' ')
        {
            count++;
        }
        i++;
    }

    return count;
}