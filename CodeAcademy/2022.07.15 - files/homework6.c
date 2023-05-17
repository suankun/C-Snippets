/*
Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define listSize 5

const char* PARTICIPANT_FORMAT_OUT = "(%d, %s, %s, %d)\n";
const char* PARTICIPANT_FORMAT_IN = "(%d, %[^,], %[^,], %d)\n";

typedef struct participant{
    
 unsigned numOfPart;
 char firstName[20];
 char secondName[20];
 int age;
}participant;

void addPart(participant* participant0);

int main(){
 participant *participant0;
 participant0=malloc(listSize*sizeof(participant));
 addPart(participant0);
 free(participant0);
}

void addPart(participant* participant0){
    FILE *FilePointer = NULL;

    FilePointer = fopen("Task6.txt", "rt");
    int i;
    int count=0;
    char choice='1';
    for(i=0;choice!='0';i++){
        printf("Reading Participant data... \n");
        fscanf(FilePointer, PARTICIPANT_FORMAT_IN, &participant0[i].numOfPart, participant0[i].firstName, participant0[i].secondName, &participant0[i].age);
        count++;
        printf("Do you have another participant to add?\nPress 1 to enter new participant or 0 to print a list of participants.\n");
        scanf(" %c",&choice); 
    }

    for (i=0;i<4;i++){
        printf(PARTICIPANT_FORMAT_OUT,participant0[i].numOfPart, participant0[i].firstName, participant0[i].secondName, participant0[i].age);
    }

    fclose(FilePointer);
}