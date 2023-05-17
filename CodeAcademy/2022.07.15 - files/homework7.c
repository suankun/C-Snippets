/*
Задача 7.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    fpos_t position;
    char *filename = "Task9.txt";

    /*w+ means the file is in both read and write mode at the same time*/
    fopen_s (&pfile, filename, "w+");

    if(pfile==NULL){
        printf("Failed to open %s.\n", filename);
        exit(1);
    }
    else{
        fprintf(pfile, "%s %s %s", "This is", "a test to write", "bez da ni boli sartzeto ;)");
        fgetpos(pfile, &position);
        printf("Printed %d characters to the file", position);
    }
    
    fclose(pfile);
    pfile = NULL;
}