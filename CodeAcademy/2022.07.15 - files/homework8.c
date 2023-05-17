/*
Задача 8.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Преместете се няколко пъти напред и назад на различни позиции.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    int fpos = 0;
    fpos_t position;
    char *filename = "Task10.txt";
    char StrWrt[] = "This is a test string to write";

    fopen_s (&pfile, filename, "w");
 // pfile = fopen(filename, "w+");

    if(pfile==NULL){
        printf("Failed to open %s.\n", filename);
    }
    else{
        fputs(StrWrt, pfile);
        fprintf(pfile, "\n\n%s %s %s", "This is", "a test to write", "bez da ni boli sartzeto ;)");   
    }

    fpos = ftell(pfile);
    fgetpos(pfile, &position);
    fclose(pfile);
    printf("\nFile size is %d", fpos);
    printf("File size is %d", position);
    pfile = NULL; 
}