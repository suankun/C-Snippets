/*
 * Task 4: Create With a program that calculates 
 * the value of purchases in grocery store. The customer 
 * can buy different combination of products. The store 
 * has the following products available and prices:
 * Tomatoes - BGN 4.5 per kilogram, Flour BGN 1.80 per kilogram,
 * Yogurt - BGN 0.50 per piece, Funnel ice cream BGN 0.60 per piece
 * Sweets BGN 1.50 per kilogram, Lollipops BGN 0.15 per piece.
 */

#include <stdio.h>

int menuOrder() {
    int order = 0;
    printf("-> Price list: <-\n");
    printf("Tomatoes = 4.50lv/kg - enter 1\n");
    printf("Flour = 1.80lv/kg - enter 2\n");
    printf("Yogurt = 0.50lv/pcs - enter 3\n");
    printf("Funnel ice cream = 0.60lv/pcs - enter 4\n");
    printf("Sweets = 1.50lv/kg - enter 5\n");
    printf("Lollipops = 0.15lv/pcs - enter 6\n");
    printf("For EXIT - enter 0\n");
    printf("Enter your choice: ");
    scanf("%d", &order);
    return order;
}

int quantity() {
	int qty = 0;
	printf("How many kg/pcs: ");
    scanf("%d", &qty);
	return qty;
}

int totalPrice(float *totalCost, int order, int qty) {
	float tomatoes = 4.50, flour = 1.80, yogurt = 0.50;
    float funnelIceCream = 0.60, sweets = 1.50, lollipops = 0.15;
	switch (order)
	{
		case 1: *totalCost += tomatoes * qty; break;
		case 2: *totalCost += flour * qty; break;
		case 3: *totalCost += yogurt * qty; break;
		case 4: *totalCost += funnelIceCream * qty; break;
		case 5: *totalCost += sweets * qty; break;
		case 6: *totalCost += lollipops * qty; break;
		default: break;
	}
	return *totalCost;
}

void printResult(int *totalCost) {
	printf("Total cost is: %.2flv\n", *totalCost);
}

int main()
{
    // declare variables
    float totalCost = 0;
    int order = 0, qty = 0;

    // table for ordering foods from the minimarket
    do
    {
        // menu
        order = menuOrder();
        
        // if the client enter 0, break the loop
        if(order == 0)
            break;

        // receiving the qty of the order
        qty = quantity();
        
        // calculating the price for the current order
		totalPrice(&totalCost, order, qty);
        
    } while (order != 0);


    // printing the result
    printResult(&totalCost);

    return 0;
}