/*
 * Program that receives a "size" value
 * from the user and should read a sequence
 * of "size" numbers and check if the
 * numbers are "Very Ascending" of not. 
 */

#include <stdio.h>

int main()
{
    int sequenceSize;
    int previousValue = 0, currentValue = 0;
    
    int veryAscendingFlag = 1;
    
    /*user input, continuing asking for positive size number*/
    do
    {
        printf("Enter size (total size of sequence): ");
        scanf("%d", &sequenceSize);
    } while(sequenceSize <= 0);
    
    do
    {
        /*user input, a numbers in the sequence*/
        printf("Insert value: ");
        scanf("%d", &currentValue);

        /*checking if the value is ascending or not comparing current and previous value*/   
        if(currentValue < 0)
            printf("Number isn't positive! \n");
        else
        {
            if(currentValue <= previousValue)
            {
                veryAscendingFlag = 0;
                break;
            }
            previousValue = currentValue;
            sequenceSize--;
        }
    } while(sequenceSize > 0);
    
    /*printing the result*/
    if(veryAscendingFlag == 1)
        printf("This Sequence is Very Ascending! \n");
    else
        printf("This Sequence is NOT Very Ascending! \n");
    
    return 0;
}