/*
 * Functions that receives some number - "length".
 * Returns --> 999..9
 * Examples:
 *       - length 3 --> 999
 *       - length 5 --> 99999
 */

#include <stdio.h>

int nineSequance(int length)
{
    int i, num = 0;
    
    for(i = 0; i < length; i++)
    {
        num = num*10 + 9;
    }
    
    return num;
}

int main()
{
    int nineSeq, result;
    
    printf("Enter a length for the n-sequence: ");
    scanf("%d", &nineSeq);

    result = nineSequance(nineSeq);
    
    printf("Result = %d", result);

    return 0;
}