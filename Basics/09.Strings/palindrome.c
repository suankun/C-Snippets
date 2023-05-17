/*
 * Write a program that:
 * 1. Reads a string from the user.
 * 2. Checks if string is palindrome.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int stringLength;
    char word[50];
    int i = 0;
    int flag = 1;
    
    printf("Enter a word to check if it is palindrome: ");
    gets(word);
    
    for(i = 0; i < strlen(word) / 2; i++)
    {
        if(word[i] != word[strlen(word) - i - 1])
        {
            printf("The word '%s' is NOT a Palindrome\n", word);
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The word '%s' is a Palindrome\n", word);

    return 0;
}