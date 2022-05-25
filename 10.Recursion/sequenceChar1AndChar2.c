/*
 * Recursion practice
 * Develop a recursive function that receives:
 *    - an integer value "total".
 *    - a character value "char1".
 *    - a character value "char2".
 * The function should print the sequence of "total" char1's and then
 * a 2 * sequence of "total" char2's.
 * For example:
 *    "total = 3, char1 = 'a', char2 = 'c'" --> aaacccccc
 *    "total = 2, char1 = 'b', char2 = 'd'" --> bbdddd
 */

#include <stdio.h>

void sequenceChar1AndChar2(int total, char char1, char char2)
{
    if (total >= 1)
    {
        printf("%c", char1);
        sequenceChar1AndChar2(total - 1, char1, char2);
        printf("%c", char2);
        printf("%c", char2);
    }

}

int main()
{
    sequenceChar1AndChar2(3, 'a', 'c');
    printf("\n");

    sequenceChar1AndChar2(2, 'b', 'd');
    printf("\n");
    
    return 0;
}