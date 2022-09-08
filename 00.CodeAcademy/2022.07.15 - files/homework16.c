/*
Задача 16. Напишете стандартната програма за Linux
cat , която приема
като аргументи от командния ред имена на файлове и изкарва
съдържанието им на стандартния изход. Ако на програмата не са
подадени никакви аргументи, то тя да изкара съдържанието подадено от
стандартния вход на стандартния изход.
*/
#include <stdio.h>
#include <stdio.h>

int CatFunct (char* file);
void ErrorHandler (int ErrNum);

int main (int argc, char** argv){
    int FuncResult = 0;
    char *Buffer; 
    if (argc==1){
        while(1){
            puts(Buffer);
            printf("%s", Buffer);
        }
    }
    else if(argc>2){
        printf("Usage cat <filename.extension>\n");
    }
    else if(argc == 2){
        FuncResult = CatFunct(argv[1]);
        ErrorHandler(FuncResult);
    }  
}

int CatFunct (char* file){
    char buffer[400];
    FILE *FilePointer = NULL;
    FilePointer = fopen(file,"r");
    if(FilePointer==NULL){
        return 404;
    }
    else {
        fgets(buffer, 50, FilePointer);
        printf("%s", buffer);
        return 0;
    }
}

void ErrorHandler (int ErrNum){
    switch (ErrNum){
    case 404:
        printf("404.File not found.");
        printf("Usage cat <filename.extension>\n");
    break;

    case 0:
        printf("\nIs this what you were looking for? Have a nice day!\n");
    break;
    }
}