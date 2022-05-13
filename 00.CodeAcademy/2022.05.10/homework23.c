/*
 * Write a program in C, through which natural numbers
 * from the interval [1..50] are entered.
 * The program to stop its work when entering 2 consecutive numbers,
 * which are equal.
 * The program to output the count of numbers entered and their average value.
 * Example:
 * 1,2,3,4,5,5
 * Exit:
 * count 6, average value 3.33333.
 */

#include<stdio.h>

int main()
{
    int i; // Iteration for the loop

    int counter = 0; // Counter of the inputs
    float avgValue = 0.0; // Average value of input numbers
    float currentValue = 0; // User input
    float tempValue = 0; // Copy of previous currentValue

    // User input, must be number between 1 and 51
    do
    {
        tempValue = currentValue; // Save the current value in tempValue.
        printf("Please enter a number of the card (1 ... 51): ");
        scanf("%f", &currentValue);
        avgValue += currentValue; // Save all input in avgValue.
        counter++;
    } while (currentValue != tempValue);
    
    avgValue /= counter; // Calculate the averige value.
    // Printing the result.
    printf("Count %d, average value %.2f\n", counter, avgValue);

    return 0;
}