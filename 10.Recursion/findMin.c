/*
 * Recursive function - that will get some natural number "num"
 * Read a sequence of "num" numbers from the user.
 * Return the Minimum Value in the Sequence. 
 * Example:
 * num = 3
 * 3, 1, 2 --> 1
 */
#include <stdio.h>

int findMin(int num)
{
    int tempMin;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    if (num > 1)
    {
        tempMin = findMin(num - 1);
        if (userInput < tempMin)
            return userInput;
        else
            return tempMin;
    }
    
    return userInput;
}

int main()
{
    int n;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = findMin(n);
    printf("Min value is %d\n", result);
    
    return 0;
}
