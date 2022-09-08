/*
Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва 
в друг текстов файл.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *pfilerd = NULL;
    FILE *pfilewr = NULL;
    char *filename = "Task52.txt";
    char *writename = "Task51.txt";
    int string[10];

    //fopen_s (&pfile, filename, "r");
    pfilerd = fopen(filename, "r");
    pfilewr = fopen(writename, "w+");

    if(pfilerd==NULL){
        printf("Failed to open %s.\n", filename);
        exit(1);
    }
    else if(pfilewr==NULL){
        printf("Failed to open %s.\n", writename);
        exit(1);
    }
    else{
        for(int i=0; i<(sizeof(string)/sizeof(string[0])); i++){
            fscanf(pfilerd, "%d,", &string[i]);
        }     
    }

    printf("Values copied from \" %s \" are:\n", filename);
    for(int i=0; i<(sizeof(string)/sizeof(string[0])); i++){
        printf("%d ", string[i]);
    }
    printf("\nNow copying the above numbers to \" %s \" ...done", writename);
    for(int i=0; i<(sizeof(string)/sizeof(string[0])); i++){
        fprintf(pfilewr, "%d,", string[i]);
    }

    fclose(pfilerd);
    fclose(pfilewr);
}