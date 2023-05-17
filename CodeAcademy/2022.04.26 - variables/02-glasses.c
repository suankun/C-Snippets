/*
 * Function that receives an integer (number of ounces)
 * and calculates how many glasses are needed for them.
 * One glass is 8 ounces.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables*/
    int ounces, glass;

    /*User input.*/
    printf("Enter how much ounces would you like to order: ");
    scanf("%d", &ounces);

    /*Calculating the glasses.*/
    glass = ounces / 8;

    /*Printing the result.*/
    printf("You will receive %d glasses!\n", glass);

    return 0;
}

// int main() {
// 	int ounces = 0;
// 	scanf("%d", &ounces);
// 	printf("%d\n", (ounces / 8) + 1);

// 	return 0;
// }