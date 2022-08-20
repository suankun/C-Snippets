/*
Задача 10.
Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    char *filename = "Task12.txt";
    fopen_s (&pfile, filename, "w+");

    char StrWrt[] = "This is the string to overwrite them all!";
    char StrRds[800];
    fputs(StrWrt, pfile);

    fseek(pfile, 7, SEEK_SET);
    fscanf(pfile,"%[^\n]", StrRds);
    
    printf("%s", StrRds);
}