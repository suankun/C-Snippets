// Задача 6. Напишете програма, която да изчислява средния успех на всеки
// студент и целия курс, използвайки структури. Входните данни за студентите
// трябва да бъдат въведени от потребителя. Принтирайте резултатите за
// всеки студент поотделно, както и за целия курс.

#include <stdio.h>

struct student {
    int test1;
    int test2;
    int test3;
} firstStudent, secondStudent;

int main() {
    printf("Enter data for 3 tests for the first student: ");
    scanf("%d %d %d", &firstStudent.test1, &firstStudent.test2, &firstStudent.test3);

    printf("Enter data for 3 tests for the second student: ");
    scanf("%d %d %d", &secondStudent.test1, &secondStudent.test2, &secondStudent.test3);

    float avgFirstStudent = (firstStudent.test1 + firstStudent.test2 + firstStudent.test3) / 3.0;
    float avgSecondStudent = (secondStudent.test1 + secondStudent.test2 + secondStudent.test3) / 3.0;
    float avgAllStudents = (avgFirstStudent + avgSecondStudent) / 2.0;

    printf("Avg first student: %.2f, avg second student: %.2f, avg whole class: %.2f\n", avgFirstStudent, avgSecondStudent, avgAllStudents);

    return 0;
}
