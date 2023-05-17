/*
Задача 15. Направете сериализация и десериализация на структурата в
XML формат по показания в лекцията начин:
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
char name[20];
int age;
char gender;
}t_person;

const char* FORMAT_XML_WRITE = "<cat>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</cat>\n";
const char* FORMAT_XML_READ = "<cat>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</cat>\n";

int main(){
    FILE *xmlfp = NULL;
    xmlfp=fopen("Task18.xml","a+");
    t_person Cat1 ={
        .name = "Amellie",
        .age = 5,
        .gender = 'F'
    };

    t_person Cat2 ={
        .name = "Bandit",
        .age = 3,
        .gender = 'M'
    };

    t_person Cat3;

    if (xmlfp==NULL){
        printf("Nope! No XMLs here.");
        exit(1);
    }

    fprintf(xmlfp,FORMAT_XML_WRITE, Cat1.name, Cat1.age, Cat1.gender);

    fscanf(xmlfp,FORMAT_XML_READ, Cat3.name, Cat3.age, Cat3.gender);

    printf(FORMAT_XML_WRITE, Cat3.name, Cat3.age, Cat3.gender);
}