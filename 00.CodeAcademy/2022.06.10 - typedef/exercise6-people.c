#include <stdio.h>
#include <string.h>

struct people
{
    char name[20];
    float salary;
    int year;
    struct people *next;        
} worker;

int main()
{
    struct people list1;
    strcpy(list1.name,"Kiril");
    list1.salary = 3000;
    list1.year = 35;
    
    struct people list2;
    strcpy(list2.name,"Kiril");
    list2.salary = 3200;
    list2.year = 45;

    list1.next = &list2;

    float zaplata = list1.next -> salary;

    printf("%.2f\n", zaplata);

    return 0;
}
