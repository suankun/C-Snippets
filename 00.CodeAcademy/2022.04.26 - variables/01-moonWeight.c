/*
 * Function that calculates the weight on the moon.
 * The gravitation on the Moon is 17% from 
 * the gravitation on the Earth.
 */

#include <stdio.h>

int main()
{
    /*Declare the variables*/
    int weight;
    float result;

    /*User input.*/
    printf("Enter your weight: ");
    scanf("%d", &weight);

    /*Calculating the gravitation.*/
    result = weight * 0.17;

    /*Printing the result.*/
    printf("Your weight on the moon will be: %.2f\n", result);

    return 0;
}

// int main() {
// 	float weight;
// 	scanf("%f", &weight);
// 	printf("%.2f\n", weight * 0.17);

// 	return 0;
// }