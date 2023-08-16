#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fprintf(<pointer_to_a_file>, <placeholders>, <parameters>);

// int main() {
//     int num = 5;
//     float num2 = 9.7;
//     FILE* fp;

//     fp = fopen("myFirstFile3.txt", "w");

//     if (fp == NULL)  // file was successfully opened
//         printf("The Opening of the file has failed\n");
//     else
//     {
//         fprintf(fp, "%d %f", num, num2);
//         fclose(fp);
//     }

//     return 0;
// }

// fscanf(<pointer_to_a_file>, <placeholders>, <parameters>);

// int main() {
//     int num;
//     FILE* fp;

//     fp = fopen("myFirstFile3.txt", "r");

//     if (fp == NULL)  // file was successfully opened
//         printf("The Opening of the file has failed\n");
//     else
//     {
//         fscanf(fp, "%d", &num);
//         printf("num from file = %d\n", num);
//         fclose(fp);
//     }

//     return 0;
// }

int main() {
    int num;
    FILE* fp;

    fp = fopen("myFirstFile3.txt", "r");

    if (fp == NULL)  // file was successfully opened
        printf("The Opening of the file has failed\n");
    else
    {
        fprintf(stdout, "%d", num);  // printf("%d", num);
        fscanf(stdin, "%d", &num);   // scanf("%d", &num);
        printf("num from file = %d\n", num);
        fclose(fp);
    }

    return 0;
}
