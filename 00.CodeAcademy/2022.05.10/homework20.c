/*
 * Write a program for counting the frequency of digits in a given number.
 */

#include <stdio.h>

int main()
{
	int num, tempNum; // num - user input, tempNum - store the temp digits from "num"
    int zero = 0, one = 0, two = 0, three = 0, four = 0; // Store the result.
    int five = 0, six = 0, seven = 0, eight = 0, nine = 0; // Store the result.

    // User input
    printf("Enter a num: ");
    scanf("%d", &num);

    // Using while loop to separate the "num" and add the digits to result using switch.
    while(num > 0)
    {    tempNum = num % 10; // Taking the current digit.
        switch (tempNum)
        {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        }
        num /= 10; // deleting the num to take the last digit in next iteration.
    }
    
    // Printing the result.
    printf("Frequency of 0 = %d\n", zero);
    printf("Frequency of 1 = %d\n", one);
    printf("Frequency of 2 = %d\n", two);
    printf("Frequency of 3 = %d\n", three);
    printf("Frequency of 4 = %d\n", four);
    printf("Frequency of 5 = %d\n", five);
    printf("Frequency of 6 = %d\n", six);
    printf("Frequency of 7 = %d\n", seven);
    printf("Frequency of 8 = %d\n", eight);
    printf("Frequency of 9 = %d\n", nine);
    
	return 0;
}