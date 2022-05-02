/*
 * Task 3: Imagine you have a caravan rental company and
 * campers for rent, for which you need to develop software.
 * You are a small company and you have a total of 3 caravans 
 * at a price of 90lv per day and 3 campers at a price
 * 100lv per day. Declare variables for the number of caravans, the price
 * of caravans, the number of campers and their price. Make a menu that
 * asks the customer a caravan or camper will want. Make a variable in which
 * to collect the money that the client owes to the company. Print
 * the result.
 */

#include <stdio.h>

int main()
{
    /*Declare variables*/
    int caravan = 3, caravanPrice = 90;
    int camper = 3, camperPrice = 100;
    int cost = 0;
    int vehiclesCounter = 0;
    int days = 0;

    /*Menu for caravans and campers.*/
    do
    {
        printf("Price list:\n");
        printf("------------\n");
        printf("Caravan = 90lv/day - enter 1\n");
        printf("Camper = 100lv/day - enter 2\n");
        printf("Enter your choice: ");
        scanf("%d", &cost);
    } while (cost < 1 || cost > 2);

    /* 
     * Using do while loop to ask for the number of vehicles
     * which the client is needed. 
     */
    do
    {
        printf("How many of them: ");
        scanf("%d", &vehiclesCounter);
    } while (vehiclesCounter < 1 || vehiclesCounter > 3);
    
    /*Taking the days.*/
    printf("For how many days: ");
    scanf("%d", &days);

    /*Calculating the total cost.*/
    if(cost == 1)
        cost = 90 * vehiclesCounter * days;
    else
        cost = 100 * vehiclesCounter * days;

    /*Printing the result.*/
    printf("The client owes: %dlv\n", cost);

    return 0;
}