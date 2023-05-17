/*
 * Functions name --> toLower.
 * Receive a character.
 * If this character is an Upper Case Letter ('A', 'B', 'C'... 'Z').
 * Return the Lower Case letter ('a', 'b', 'c'... 'z').
 * Otherwise return -1.
 */

#include <stdio.h>

char toLower(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
        return letter - 'A' + 'a';
    else
        return -1;
    
    return letter;
}

int main()
{
    char let;
    
    printf("Enter a char: ");
    scanf("%c", &let);
    
    printf("The result: %c", toLower(let));

    return 0;
}