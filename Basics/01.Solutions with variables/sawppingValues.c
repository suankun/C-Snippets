#include <stdio.h>



int main() {

    float num1, num2;



    // Input the floating-point values

    printf("Enter the first floating-point value: ");

    scanf("%f", &num1);

    printf("Enter the second floating-point value: ");

    scanf("%f", &num2);



    // Print values before swapping

    printf("Values before swapping: num1 = %.2f\n, num2 = %.2f\n" , num1, num2);



    // Swap the values

    float temp = num1;

    num1 = num2;

    num2 = temp;



    // Print values after swapping

    printf("\nValues after swapping: num1 = %.2f\n, num2 = %.2f\n" , num1, num2);



    return 0;

}
//
#include<stdio.h>

int main()
{
	float a = 97.5;
	float b = 23.15;
	float temp;
	printf("a = %f\n", a);
	printf("b = %f\n", b); 
	temp = a;
	a = b;
	b = temp;
	printf("a = %f\n", a);
	printf("b = %f\n", b);
}
