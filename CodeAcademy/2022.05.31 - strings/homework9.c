#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[80];
    int count = 0;

    // User input.
    printf("Enter a string: ");
    fgets(str, 200, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a word: ");
    scanf("%s", &word);

    char * token = strtok(str, " ");
    while (token != NULL)
    {
        printf("%s\n", token);

        if (strcmp(token, word) == 0)
        {
            count++;
        }

        token = strtok(NULL, " ");
    }

    printf("The word '%s' occurs %d times.\n", word, count);
    
    return 0;
}