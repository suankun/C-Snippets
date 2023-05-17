/*
 * An ordered deck of cards is given.
 * The ordinance on card weight is:
 * 2,3,4,5,6,7,8,9,10, Jack, Queen, King, Ace.
 * The ordinance on the color of the cards is:
 * clubs, diamonds, hearts, spades.
 * Create a program in C that enters N natural numbers from the interval
 * [1..51] and the entered card number and
 * the other larger cards from the deck are displayed.
 * Use a nested loop.
 * Example:
 * 47
 * Exit:
 * King heart, King Spade, Ace Club, Ace Diamond, Ace Heart, Ace Spade
 */

#include<stdio.h>

int main()
{
    // Playing deck
    char value[13][6]={"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
    char suit[4][9]= {"Hearts", "Diamonds", "Clubs", "Spades"};
   
    int i; // Iteration for the loops
    int j; // Iteration for the loops

    int counter = 0; // Counter of the playing deck
    int inputCard; // User input

    // User input, must be number between 1 and 51
    do
    {
       printf("Please enter a number of the card (1 ... 51): ");
        scanf("%d", &inputCard); 
    } while (inputCard < 1 || inputCard > 51);
    
    // Printing the result
    for (i=0; i<13; i++)
    {
        for (j=0; j<4; j++)
        {
            counter++;
            // Printing the cards after the user input number
            if(inputCard <= counter)
                printf("%s %s\n", value[i], suit[j]);
        }
    }

    return 0;
}