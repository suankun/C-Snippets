/*
Задача 12.
Напишете програма, която да обръща всички символи в 
текстов файл, с главни букви запишете резултата в друг 
временен файл. След това преименувайте новия файл 
с името на оригиналния файл и изтрийте временното 
име. Отпечатайте съдържанието на файл на 
стандартния изход с главни букви.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* SwapText (char *string);
char* MakeUpper(char *string);

int main(){
    FILE *originalpf = NULL;
    FILE *temppf = NULL;
    char *filename_origin = "Task14.txt";
    char *filename_temp = "Task14_t.txt";
    char *buffer = malloc (60*sizeof(char));
    originalpf = fopen(filename_origin, "r+");
    fopen_s(&temppf, filename_temp, "w+");

    if (originalpf==NULL || temppf == NULL){
        printf("At least one of the files did not open! Kthnxbye.");
        exit(1);
    }
    fseek(originalpf,0,SEEK_SET);
    fscanf(originalpf,"%[^\32]s", buffer);
    
    SwapText(buffer);
    MakeUpper(buffer);

    fputs(buffer,temppf);

    fclose(originalpf);
    fclose(temppf);
    free(buffer);
}

char* SwapText(char *string){
    int len = strlen(string)-1;
    char temp = 'e';
    for (int i=0; i <=len/2; i++){
        temp = string[len-i];
        string[len-i] = string[i];
        string[i] = temp;
    }
}

char* MakeUpper(char *string){
    int i = 0;
    int len = strlen(string)-1;
    for(i; i<=len;i++){
        string[i] = toupper(string[i]);
    }
}