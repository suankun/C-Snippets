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

int priceList() {
    int cost = 0;
    do
    {
        printf("Price list:\n");
        printf("------------\n");
        printf("Caravan = 90lv/day - enter 1\n");
        printf("Camper = 100lv/day - enter 2\n");
        printf("Enter your choice: ");
        scanf("%d", &cost);
    } while (cost < 1 || cost > 2);
    return cost;
}

int vehiclesNumber() {
    int vehiclesCounter = 0;
    do
    {
        printf("How many of them: ");
        scanf("%d", &vehiclesCounter);
    } while (vehiclesCounter < 1 || vehiclesCounter > 3);
    return vehiclesCounter;
}

int daysOfUsage() {
    int days = 0;
    printf("For how many days: ");
    scanf("%d", &days);
    return days;
}

int totalCost(int cost, int vehiclesCounter, int days) {
	int total = 0;
	int caravanPrice = 90;
    int camperPrice = 100;
	if(total == 1)
        total = caravanPrice * vehiclesCounter * days;
    else
        total = camperPrice * vehiclesCounter * days;
	return total;
}

void printResult(int total) {
	printf("The client owes: %d lv\n", total);
}

int main()
{
	// Menu for caravans and campers
    int cost = priceList();
    
    // number of vehicles which the client is needed
    int vehiclesCounter = vehiclesNumber();
    
    // days of usage
    int days = daysOfUsage();

    // calculating the total cost
    int total = totalCost(cost, vehiclesCounter, days);

    // printing the result
    printResult(total);

    return 0;
}