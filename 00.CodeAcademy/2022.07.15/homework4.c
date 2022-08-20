/*
Задача 4. Прочетете цял стринг от създадения вече файл, като използвате:
char *fgets(char * str, int nchars, FILE *stream).
Принтирайте прочетения стринг на екрана.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    char *filename = "Task2.txt";
    char string[400];

    fopen_s (&pfile, filename, "r");
 // pfile = fopen(filename, "r");

    if(pfile==NULL){
        printf("Failed to open %s.\n", filename);
    }
    else{
        fgets(string, 200, pfile);  
    //fgets reads one line and sets pointer to the end of the first line   
    }

    printf("%s\n", string);
    
    fclose(pfile);
    pfile = NULL;
}