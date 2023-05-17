/*
Задача 3. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница име, поздрав, брой. Отворете файла за
четене, като проверявате дали файла наистина е отворен. Използвайте
fgetc()fgetc(), която взема само един символ от файла. Направете while цикъл,
за да изпишете всички символи, като проверявате за край на файл с EOF .
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    char *filename = "Task2.txt";

//  fopen_s (&pfile, filename, "r");
    pfile = fopen(filename, "r");

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
    pfile = NULL;
}   