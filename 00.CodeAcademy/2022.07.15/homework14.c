/*
Задача 14. Напишете програма, която премахва ред с определен
номер от зададен файл. Реда, който трябва да се премахне да бъде
въведен от потребителя. Принтирайте началния и резултатния
файлове.
*/

#include <stdio.h>

int main() {
    FILE *fp_in = NULL, *fp_temp = NULL;

    fp_in = fopen("test.txt", "r");
    fp_temp = fopen("temp.txt", "w");
    if (fp_in == NULL) {
        printf("File open error.\n");
        return 1;
    }

    unsigned lineToDelete = 0, currentLine = 0;
    char lineBuffer[256] = "", flag_deleted = 0;
    printf("Enter the index (1-based) of the line to delete: ");
    scanf("%u", &lineToDelete);

    while (1) {
        if (feof(fp_in))
            break;
        currentLine++;
        if (currentLine == lineToDelete) {
            flag_deleted = 1;
            fgets(lineBuffer, sizeof(lineBuffer), fp_in);
            continue;
        }
        fputs(fgets(lineBuffer, sizeof(lineBuffer), fp_in), fp_temp);
    }

    if (flag_deleted) {
        printf("Line %d deleted successfully.\n", lineToDelete);
    } else {
        printf("Could not delete line %d.\n", lineToDelete);
    }

    fclose(fp_in);
    fclose(fp_temp);
    fp_in = fp_temp = NULL;

    remove("test.txt");
    rename("temp.txt", "test.txt");
    
    return 0;
}