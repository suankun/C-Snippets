/*
 * Write a recursive function that:
 * 1. Calculate the number of appearances of a given a CHARACTER in a sequence
 * 2. Read a sequence of a characters from the user .. Up until '$'
 * 3. Return the total number of occurences the given character appeared in the sequence
 * Example: 
 * Character = 'c'
 * Sequence = 'a', 'b', 'c', 'a', 'c', '$' --> 2
 */

#include <stdio.h>

int totalCharacters(char character)
{
    char tempChar;

    printf("Enter a character: ");
    scanf("%c", &tempChar);
    
    // Stopping condition
    if(tempChar == '$')
        return 0;
    // Recursive calls
    if(tempChar == character)
        return 1 + totalCharacters(character);
    
    return totalCharacters(character);

}

int main()
{
    char ch;
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    
    printf("Total number of occurences of %c: %d\n", ch, totalCharacters(ch));

    return 0;
}