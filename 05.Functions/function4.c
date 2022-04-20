/*
 * Function that receives 3 numbers --> grade1, grade2, grade3,
 * find out the average between them.
 * Return this average.
 */

#include <stdio.h>

/*Creating Function that receives 3 parameters. The function returns average between 3 numbers/grades.*/
float findAverage(int grade1, int grade2, int grade3)
{
    float avg;
    avg = (grade1 + grade2 + grade3) / 3.0;
    return avg;
}

int main()
{
    int g1, g2, g3;
    /*user input*/
    printf("Enter 3 grades: ");
    scanf("%d%d%d", &g1, &g2, &g3);
    /*printing the result, calling the function*/
    printf("Average is %.2f", findAverage(g1, g2, g3));
    
    return 0;
}