#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str[4] = {
        "String",
        "Topics",
        "Hello",
        "World"
    };

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        int j = 0;
        while (*(str[i] + j) != '\0') 
        {
            printf("%c", *(str[i] + j));
            j++;
        }
        printf("\n");
    }

    return 0;
}