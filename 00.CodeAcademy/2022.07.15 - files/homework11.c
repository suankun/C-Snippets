/*
Задача 11.
Напишете програма, която да намери общия брой на 
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст. 
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да 
брои броя на редовете.
*/
#include <stdio.h>
#include <stdlib.h>

#define FNLENGTH_MAX 100


int main(){
    FILE *pfile = NULL;
    int NLcounter = 0;
    char *filename = NULL;
    filename = calloc(FNLENGTH_MAX, sizeof(char));
    printf("Please enter the name of the file: ");
    scanf("%s", filename);
    fopen_s (&pfile, filename, "r");

    for (int i = getc(pfile); i != EOF; i = getc(pfile)){
        if (i == '\n'){
            NLcounter += 1;
        } 
    }

    printf("The file contains %d new line characters", NLcounter);
} 