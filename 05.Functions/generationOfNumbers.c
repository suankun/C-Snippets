/*
 * Functions that receives some number - "length".
 * Returns -->
 *          if length <= 9
 *              print 12345..., length
 *          else length > 10
 *              print 999..., length
 * Examples:
 *       - length = 3 --> 123
 *       - length = 5 --> 12345
 *       - length = 12 --> 999999999999
 */

#include <stdio.h>

long nineSequance(int length)
{
    int i;
    long num = 0;
    
    for(i = 0; i < length; i++)
    {
        num = num*10 + 9;
    }
    
    return num;
}

long oneToNine(int length)
{
    int i;
    long num = 0;
    
    if(length <= 9)
    {
       for(i = 1; i <= length; i++)
        {
            num = num*10 + i;
        }
    }
    else if(length > 9)
    {
        nineSequance(length);
    }
    
    return num;
}

int main()
{
    int len;
    long result;
    
    printf("Enter a length for the n-sequence: ");
    scanf("%d", &len);

    result = oneToNine(len);
    
    printf("Result = %ld", result);

    return 0;
}