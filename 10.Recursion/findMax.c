/*
 * Recursive function - that will get some natural number "num"
 * Read a sequence of "num" numbers from the user.
 * Return the Maximum Value in the Sequence. 
 * Example:
 * num = 3
 * 1, 5, 2 --> 5
 */

#include <stdio.h>

int findMax(int num)
{
    int tempMax;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    if (num > 1)
    {
        tempMax = findMax(num - 1);
        if (userInput > tempMax)
            return userInput;
        else
            return tempMax;
    }
    
    return userInput;
}

int main()
{
    int n = 3;

    printf("Max value is %d\n", findMax(n));
    
    return 0;
}