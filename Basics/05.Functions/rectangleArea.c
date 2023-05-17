/*
 * Function that calculates the area of rectangle.
 */

#include <stdio.h>

/*Creating a function that calculates the area of rectangle.*/
float rectangeArea(float height, float width)
{
    float rectArea;
    rectArea = height * width;
    return rectArea;
}

int main()
{
    float h, w;
    float area;
    
    /*user input*/
    printf("Enter a height: ");
    scanf("%f", &h);
    printf("Enter a width: ");
    scanf("%f", &w);
    /*assigning the value of the function to area variable*/
    area = rectangeArea(h, w);
    /*printing the result*/
    printf("The area of the rectangle is %.2f", area);
    
    return 0;
}