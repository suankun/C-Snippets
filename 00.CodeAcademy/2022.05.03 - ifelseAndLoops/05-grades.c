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

// int main()
// {
// 	int sumOfGrades = 0, currGrade = 0;
// 	int counter = 0;

// 	do
// 	{
// 		printf("Enter grade between 0 and 100: ");
// 		scanf("%d", &currGrade);
// 		sumOfGrades += currGrade;
// 		counter++;
// 	} while (counter < 5);
	
// 	int avg = sumOfGrades / 5.0;

// 	if (avg >= 90) {
// 		printf("Grade A\n");
// 	} else if (avg >= 80) {
// 		printf("Grade B\n");
// 	} else if (avg >= 70) {
// 		printf("Grade C\n");
// 	} else if (avg >= 60) {
// 		printf("Grade D\n");
// 	} else if (avg >= 40) {
// 		printf("Grade E\n");
// 	} else if (avg < 40) {
// 		printf("Grade F\n");
// 	}

// 	return 0;
// }