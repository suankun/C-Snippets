#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4, grade5;
    int res;

    printf("Enter GradeA, gradeB, gradeC, gradeD, gradeE: ");
    scanf("%d %d %d %d %d", &grade1, &grade2, &grade3, &grade4, &grade5);

    res = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    if(res >= 90)
        printf("Grade A\n");
    else if(res >= 80)
        printf("Grade B\n");
    else if(res >= 70)
        printf("Grade C\n");
    else if(res >= 60)
        printf("Grade D\n");
    else if(res >= 40)
        printf("Grade E\n");
    else
        printf("Grade F\n");
	
    return 0;
}