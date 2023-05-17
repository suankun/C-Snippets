/*
 * Recursion practice
 * Develop a recursive function that receives:
 *    - an integer value "total".
 *    - a character "val" (representing a lowercase character) 'a' - 'z'
 * The function should print the sequence of "total" lowercase "val's" and then
 * a sequence of "total" uppercase "val's"
 * For example:
 *    "total = 3, val = 'c'" --> cccCCC
 *    "total = 2, val = 'b'" --> bbBB
 */

#include <stdio.h>

void printLowerUpperSequence(int total, char val)
{
    if (total >= 1)
    {
        printf("%c", val);
        printLowerUpperSequence(total - 1, val);
        printf("%c", val - 'a' + 'A');
    }

}

int main()
{
    printLowerUpperSequence(3, 'c');
    printf("\n");

    printLowerUpperSequence(2, 'b');
    printf("\n");
    
    return 0;
}