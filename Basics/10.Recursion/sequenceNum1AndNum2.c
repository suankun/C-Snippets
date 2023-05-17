/*
 * Recursion practice
 * Develop a recursive function that receives:
 *    - an integer value "total".
 *    - an integer value "num1".
 *    - an integer value "num2".
 * The function should print the sequence of "total" num1's and then
 * a sequence of "total" num2's.
 * For example:
 *    "total = 3, num1 = 2, num2 = 4" --> 222444
 *    "total = 2, num1 = 3, num2 = 5" --> 3355
 */

#include <stdio.h>

void sequenceNum1AndNum2(int total, int num1, int num2)
{
    if (total >= 1)
    {
        printf("%d", num1);
        sequenceNum1AndNum2(total - 1, num1, num2);
        printf("%d", num2);
    }

}

int main()
{
    sequenceNum1AndNum2(3, 2, 4);
    printf("\n");

    sequenceNum1AndNum2(2, 3, 5);
    printf("\n");
    
    return 0;
}