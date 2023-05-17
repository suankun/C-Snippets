/*
 * Function that receives as an integer the number of days
 * on the Earth and calculates the equivalent of years on Jupiter.
 * 1 year on Jupiter is 12 years on the Earth.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables for earth days  and jupiter years.*/
    int earthDays, jupiterYears;
    /*
     * Initialized variable containing 12 earth years
     * including additional 3 days for the leap years.
     */
    int twelveEarthYears = 4383;

    /*User input.*/
    printf("Enter Earth days which you would like to be converted: ");
    scanf("%d", &earthDays);

    /*Calculating the Jupiter years.*/
    jupiterYears = earthDays / twelveEarthYears;

    /*Printing the result.*/
    printf("These days are equivalent of %d years on Jupiter!\n", jupiterYears);

    return 0;
}

// int main() {
// 	int earthDays = 0;
// 	scanf("%d", &earthDays);
// 	printf("%d", earthDays / (12 * 365));

// 	return 0;
// }