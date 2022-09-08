/*
Задача 2. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница име, поздрав, брой. Отворете файла с
текстов редактор, за да се убедите, че данните са записани.
*/
#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 300

int main(){
    FILE *pfile = NULL;
    char *filename = "Task2.txt";

    fopen_s (&pfile, filename, "r");

    if(pfile==NULL){
        printf("Failed to open %s.\n", filename);
    }
    else{
        char c = fgetc(pfile); 
        while (c != EOF){ 
            printf ("%c", c); 
            c = fgetc(pfile); 
        }
    }
    fclose(pfile); 
}   