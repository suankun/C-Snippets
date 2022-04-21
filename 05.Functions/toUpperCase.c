/*
 * Functions name --> toUpper.
 * Receive a character.
 * If this character is a Lower Case Letter ('a', 'b', 'c'... 'z').
 * Return the Upper Case letter ('A', 'B', 'C'... 'Z').
 * Otherwise return -1.
 */

#include <stdio.h>

char toUpper(char letter)
{
    if(letter >= 'a' && letter <= 'z')
        return letter - 'a' + 'A';
    else
        return -1;
    
    return letter;
}

int main()
{
    char let;
    
    printf("Enter a char: ");
    scanf("%c", &let);
    
    printf("The result: %c", toUpper(let));

    return 0;
}