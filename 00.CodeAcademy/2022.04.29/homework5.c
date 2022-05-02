/*
 * Problem 5 Make a running light, assuming that every bit of
 * a variable is connected to a lamp (or LED). When the bit is
 * zero, the lamp does not light when the unit is lit.
 * For example, if you generate a sequence:
 * 1, 2, 3, 4, the following is obtained:
 * 1 * ....................
 * 2. * ...................
 * 4 .. * ..................
 * 8 ... * ................. ...
 * To generate a delay, use the following C runtime function:
 * #include <unistd.h>
 * unsigned int sleep (unsigned int seconds);
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
    /*Declare variables.*/
    int i, j, k;
    int seq;
    /*User input.*/
    printf("Enter the start of a sequence: ");
    scanf("%d", &seq);
    /*Printing to user the information for the sequence.*/
    printf("Sequence is: %d, %d, %d, %d\n", seq, seq + 1, seq + 2, seq + 3);
    printf("The sequence will be printed with 1 sec delay!\n");
    /*Logic for turning the lights.*/
    for(i = seq; i < seq + 4; i++)
    {
        for(j = 0; j < i - 1; j++)
        {
            printf(".");
        }
        printf("*");
        for(k = 0; k < 21 - i; k++)
        {
            printf(".");
        }
        printf("\n");
        sleep(1);
    }

    return 0;
}