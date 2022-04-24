#include <stdio.h>

int main()
{
    int grades[5];
    int i;
    int lowestGrade;
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter a grade no.%d: ", i + 1);
        scanf("%d", &grades[i]);
    }
    
    lowestGrade = grades[0];
    
    for(i = 1; i < 5; i++)
    {
        if(lowestGrade > grades[i])
        {
            lowestGrade = grades[i];
        }
    }
    
    printf("Your lowerst grade is: %d \n", lowestGrade);

    return 0;
}