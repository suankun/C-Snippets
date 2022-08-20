#ifndef task5
#define task5
#define MAX_LEN 20
#define SIZE_OF_KEY_T 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char str[MAX_LEN];
    int number;
}key_t;

void init();
void printArr(key_t *arr);

void init()
{
    key_t *words = (key_t *)malloc(sizeof(key_t) * SIZE_OF_KEY_T);
    strcpy(words[0].str, "auto");
    words[0].number = 1;
    strcpy(words[1].str, "break");
    words[1].number = 2;
    strcpy(words[2].str, "case");
    words[2].number = 3;
    strcpy(words[3].str, "char");
    words[3].number = 4;
    strcpy(words[4].str, "continue");
    words[4].number = 5;
    strcpy(words[5].str, "do");
    words[5].number = 6;
    strcpy(words[6].str, "default");
    words[6].number = 7;
    strcpy(words[7].str, "const");
    words[7].number = 8;
    strcpy(words[8].str, "double");
    words[8].number = 9;
    strcpy(words[9].str, "else");
    words[9].number = 10;
    strcpy(words[10].str, "enum");
    words[10].number = 11;
    strcpy(words[11].str, "extern");
    words[11].number = 12;
    strcpy(words[12].str, "for");
    words[12].number = 13;
    strcpy(words[13].str, "if");
    words[13].number = 14;
    strcpy(words[14].str, "goto");
    words[14].number = 15;
    strcpy(words[15].str, "float");
    words[15].number = 17;
    strcpy(words[16].str, "int");
    words[16].number = 18;
    strcpy(words[17].str, "long");
    words[17].number = 19;
    strcpy(words[18].str, "register");
    words[18].number = 20;
    strcpy(words[19].str, "return");
    words[19].number = 21;
    strcpy(words[20].str, "signed");
    words[20].number = 22;
    strcpy(words[21].str, "static");
    words[21].number = 23;
    strcpy(words[22].str, "sizeof");
    words[22].number = 24;
    strcpy(words[23].str, "short");
    words[23].number = 25;
    strcpy(words[24].str, "struct");
    words[24].number = 26;
    strcpy(words[25].str, "switch");
    words[25].number = 27;
    strcpy(words[26].str, "typedef");
    words[26].number = 28;
    strcpy(words[27].str, "union");
    words[27].number = 29;
    strcpy(words[28].str, "void");
    words[28].number = 30;
    strcpy(words[29].str, "while");
    words[29].number = 31;
    strcpy(words[30].str, "volatile");
    words[30].number = 32;
    strcpy(words[31].str, "unsigned");
    words[31].number = 33;

    printArr(words);
    free(words);

    return 0;
}

void printArr(key_t *arr)
{
    for (int i = 0; i < SIZE_OF_KEY_T; i++)
    {
        printf("%d-%s\n", arr[i].number, arr[i].str);
    }
}

#endif