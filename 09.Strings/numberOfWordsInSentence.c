/*
 * Write a program that:
 * 1. Reads a string from the user.
 * 2. Finds out the number of words.
 * 3. Prints the result to the screen.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int stringLength;
    char sentence[50];
    int i = 0;
    int countWords = 1;

    printf("Enter a string/text: ");
    gets(sentence);

    // while (sentence[i] != '\0')
    // {
    //     if(sentence[i] == ' ')
    //         countWords++;

    //     i++;
    // }

    for(i = 0; i < strlen(sentence); i++)
    {
         if(sentence[i] == ' ')
            countWords++;
    }
    

    printf("The amount of words in '%s' = %d\n", sentence, countWords);

    return 0;
}