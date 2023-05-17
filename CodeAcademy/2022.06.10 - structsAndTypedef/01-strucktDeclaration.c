#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int course;
    float grade;
    struct student *next;
};


int main()
{
    char ime[] = "Ivan";
    int k = 1;
    float uspeh = 5.90;

    struct student uchenik;
    strcpy(uchenik.name, ime);
    uchenik.course = k;
    uchenik.grade = uspeh;

    printf("%s\n", uchenik.name);

    struct student people;
    strcpy(people.name, "Peter");
    people.course = 2;
    people.grade = 5.60;
    uchenik.next = &people;

    printf("%s\n", uchenik.next -> name);

    // variant 2:
    struct student *ptr;
    ptr = &people;

    printf("%s\n", ptr -> name);

    printf("%d\n", sizeof(ptr));
    
    return 0;
}